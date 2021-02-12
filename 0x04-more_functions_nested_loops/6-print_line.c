#include "holberton.h"
/**
 * print_line - Prints line n times.
 * @n : variable.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int lin;
if (n > 0)
{
for (lin = 0; lin <= n; lin++)
_putchar('_');
}
_putchar('\n');
}
