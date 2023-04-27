#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: Pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_list(list_t *h);

#endif /* LISTS_H */

#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: Pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_list(list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                if (h->str == NULL)
                        printf("[0] (nil)\n");
                else
                        printf("[%d] %s\n", h->len, h->str);

                count++;
                h = h->next;
        }

        return (count);
}
