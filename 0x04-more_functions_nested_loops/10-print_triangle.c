#include "holberton.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size : size of the triangle.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int j, l, n;
if (size > 0)
{
for (j = 0; j < size; j++)
{
for (l = j + 1; l < size; l++)
{
_putchar(' ');
}
for (n = size + j; n > size - 1; n--)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
