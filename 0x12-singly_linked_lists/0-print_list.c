#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		s++;
	}

	return (s);
}

/*
 * Description:
 * 	This function takes in the head pointer of a linked list and prints all
 * 	the elements of the linked list. It also returns the number of nodes printed.
 *
 * Parameters:
 * 	h (list_t *): A pointer to the head of the linked list.
 *
 * Return:
 * 	size_t: The number of nodes printed.
 */

int main(void)
{
	/* create a linked list */
	list_t *head = NULL;
	list_t *second = NULL;
	list_t *third = NULL;

	head = malloc(sizeof(list_t));
	if (head == NULL)
		return (1);
	head->str = "Hello";
	head->len = 5;
	head->next = NULL;

	second = malloc(sizeof(list_t));
	if (second == NULL)
	{
		free(head);
		return (1);
	}
	second->str = "World";
	second->len = 5;
	second->next = NULL;
	head->next = second;

	third = malloc(sizeof(list_t));
	if (third == NULL)
	{
		free(head);
		free(second);
		return (1);
	}
	third->str = "!";
	third->len = 1;
	third->next = NULL;
	second->next = third;

	/* print the linked list */
	size_t node_count = print_list(head);
	printf("Number of nodes: %lu\n", node_count);

	/* free the linked list */
	free(third);
	free(second);
	free(head);

	return (0);
}
