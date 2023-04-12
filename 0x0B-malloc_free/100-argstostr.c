#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments in argv into a single string
 *
 * @ac: Number of arguments in argv
 * @av: Array of arguments
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    int i, j, len = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            len++;
        len++; /* Account for space for newline character */
    }

    str = malloc(sizeof(char) * len);
    if (str == NULL)
        return (NULL);

    /* Copy each argument into the concatenated string */
    for (i = 0, len = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            str[len++] = av[i][j];
        str[len++] = '\n'; /* Add newline character */
    }
    str[len] = '\0'; /* Add null terminator */

    return (str);
}
