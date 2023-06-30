#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * @head: pointer to head pointer of dlistint_t
 * @num: node data
 * Return: address of new node, NULL if operation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int num)
{
	dlistint_t *curr, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = num;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	curr = *head;
	while (curr)
	{
		if (!((curr)->next))
		{
			(curr)->next = new_node;
			new_node->prev = (curr);
			curr = curr->next;
		}

		curr = curr->next;
	}

	return (new_node);
}
