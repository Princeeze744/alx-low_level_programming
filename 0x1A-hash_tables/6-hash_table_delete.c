#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;

			temp->key[0] = '\0';
			temp->value[0] = '\0';
			free(temp->key);
			free(temp->value);

			current = current->next;
			free(temp);

		}
	}
	free(ht->array);
	free(ht);
}
