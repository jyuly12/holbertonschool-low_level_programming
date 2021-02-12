#include "holberton.h"
/**
 * print_square - Prints a square.
 * @size : size of the square.
 *
 */
void print_square(int size)
{
int i, j;
i = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (i < size)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
i++;
_putchar('\n');
}
}
}

