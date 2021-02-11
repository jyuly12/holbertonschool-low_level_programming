#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int diag;
if (n > 0)
{
for (diag = 0; diag <= n; diag++)
{
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
}
