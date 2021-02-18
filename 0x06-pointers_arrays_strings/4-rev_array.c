#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: point parameter.
 * @n: input parameter.
 *
 */

void reverse_array(int *a, int n)
{
int i = 0;
char var;

for (n--; i < n; i++, n--)
{
var = a[i];
a[i] = a[n];
a[n] = var;
}
}
