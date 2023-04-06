#include "main.h"

/**
 * check_pal - Checks if a string is a palindrome recursively.
 *
 * @s: The string to check.
 * @i: The iterator.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len)
{
    if (*(s + i) != *(s + len - 1))
        return (0);
    if (i >= len)
        return (1);
    return (check_pal(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 *
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is palindrone.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
    if (*s == 0)
        return (1);
    return (check_pal(s, 0, _strlen_recursion(s)));
}
