#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a separator, followed by a new line
 *
 * @separator: The string to be printed between numbers, or NULL if no separator is needed
 * @n: The number of integers to print
 * @...: The integers to print
 *
 * Description: This function takes in a variable number of integers and prints them to stdout.
 * If a separator string is provided, it will be printed between each integer. The printed list
 * will be followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
