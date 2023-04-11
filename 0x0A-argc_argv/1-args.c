#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    (void)argv; /* Ignore argv */
    printf("%d\n", argc - 1);
    return (0);
}
