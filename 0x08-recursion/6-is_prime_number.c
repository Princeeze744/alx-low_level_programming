#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively checks if a number is prime
 * @n: the number to check
 * @i: the current divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}

