#include <stdio.h>
#include "hash_tables.h"

#define TRUE 1
#define FALSE 0

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int print_first;

	print_first = FALSE;
	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{

			current = ht->array[i];
			if (current)
			{
				if (print_first == FALSE)
					print_first = TRUE;
				else
					printf(", ");
				printf("'%s': '%s'",
						current->key,
						current->value);
				current = current->next;
			}
			while (current)
			{
				printf(", '%s': '%s'",
						current->key,
						current->value);
				current = current->next;
			}
		}
		printf("}\n");
	}
}
