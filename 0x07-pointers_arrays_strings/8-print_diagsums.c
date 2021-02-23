#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Sum of the two diagonals of a square matrix of integers.
 * @a: array to print.
 * @size: array size.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
int i, j, count, first, second;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
first += a[count];
}
if ((i + j) == (size - 1))
{
second += a[count];
}
count++;
}
}
printf("%d, %d\n", first, second);
}
