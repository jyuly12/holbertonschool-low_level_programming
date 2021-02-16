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
int i;
while (i < n)
{
printf("%d", a[i]);
i++;
if (i < n)
{
printf(", ");
}
}
printf("\n");
}
