#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to head pointer
 * @idx: index where node is to be added, index starts at 0 :)
 * @n: node data
 * Return: address of new node, NULL if function fails or idx > length of list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node, *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!h)
	{
		*h = new_node;
		return (new_node);
	}

	count = 0;
	curr = *h;
	while (curr)
	{
		if (idx == count)
		{
			new_node->next = curr;
			new_node->prev = curr->prev;
			curr->prev = new_node;
			return (new_node);
		}
		curr = curr->next;
		count++;
	}
	return (NULL);
}
