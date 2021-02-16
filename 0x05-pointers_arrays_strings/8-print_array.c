#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: input value
 * @n: input value
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
