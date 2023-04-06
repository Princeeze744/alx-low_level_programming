#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
    while (*s)
    {
        _putchar(*s++);
    }
    _putchar('\n');
}
