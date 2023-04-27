/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                if (h->str == NULL)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", h->len, h->str);

                h = h->next;
                count++;
        }

        return (count);
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

