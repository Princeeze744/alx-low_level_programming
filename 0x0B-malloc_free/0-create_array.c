/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The char value to initialize each element with.
 *
 * Return: On success, a pointer to the created array. On failure, NULL.
 */
char *create_array(unsigned int size, char c)
{
    char *arr;

    if (size == 0)
    {
        return (NULL);
    }

    arr = malloc(size * sizeof(char));

    if (arr == NULL)
    {
        return (NULL);
    }

    for (unsigned int i = 0; i < size; i++)
    {
        arr[i] = c;
    }

    return (arr);
}
