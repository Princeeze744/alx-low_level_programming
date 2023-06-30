#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked
 * dlistint_t list
 * @head: pointer to head of the list
 * Return: number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t length;

	length = 0;

	while (head)
	{
		length++;
		head = head->next;
	}

	return (length);
}
