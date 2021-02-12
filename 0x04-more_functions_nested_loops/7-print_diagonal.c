#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n : character.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
_putchar('\\');
_putchar('\n');
for (i = 0; i < (n - 1); i++)
{
for (j = i; j >= 0; j--)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
