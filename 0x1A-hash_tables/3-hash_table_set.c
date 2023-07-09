#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: hash table to add/update key/value to
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current;

	if (!ht || !key || strlen(key) < 1)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == EQUAL)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->value = strdup(value);
	if (!node->value)
	{
		free_node(node, NODE_VALUE_MALLOC_ERROR);
		return (0);
	}

	node->key = strdup(key);
	if (!node->key)
	{
		free_node(node, NODE_KEY_MALLOC_ERROR);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

/**
 * free_node - frees node in error cases
 *
 * @node: node to be free'd
 * @error_case: error case
 */
void free_node(hash_node_t *node, int error_case)
{
	if (error_case == NODE_VALUE_MALLOC_ERROR)
		free(node);
	else if (error_case == NODE_KEY_MALLOC_ERROR)
	{
		free(node->value);
		free(node);
	}
}
