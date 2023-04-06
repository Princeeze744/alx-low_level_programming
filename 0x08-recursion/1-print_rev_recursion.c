#include "main.h"

/**
 * _print_rev_helper - Helper function for _print_rev_recursion.
 * @s: The string to be printed in reverse.
 * @len: The length of the string.
 */
void _print_rev_helper(char *s, int len)
{
	if (len == 0)
		return;

	_putchar(s[len - 1]);
	_print_rev_helper(s, len - 1);
}

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	int len = 0;

	/* Determine the length of the string */
	while (s[len] != '\0')
		len++;

	/* Print the string in reverse */
	_print_rev_helper(s, len);
}
