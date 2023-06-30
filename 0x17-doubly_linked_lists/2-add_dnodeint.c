#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list
 * @head: pointer to the head pointer of a dlistint_t list
 * @num: node data
 * Return: address of new node, NULL if operation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int num)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
