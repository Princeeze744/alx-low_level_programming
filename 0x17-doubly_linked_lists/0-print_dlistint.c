#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint list
 * @head: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count;

	count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
