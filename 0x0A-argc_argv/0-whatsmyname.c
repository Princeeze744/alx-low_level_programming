#include <stdio.h>
#include "main.h"

/**
 * main - Entry point. Prints the name of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", *argv);
    return (0);
}
