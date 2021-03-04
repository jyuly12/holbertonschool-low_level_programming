#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: parameter min.
 * @max: parameter max.
 *
 * Return: result of @arr or NULL.
 */
int *array_range(int min, int max)
{
int *arr, i = 0;

if (min > max)
{
return (NULL);
}
arr = malloc(sizeof(int) * ((max - min) + 1));

if (arr == NULL)
{
return (NULL);
}

i = 0;
while (min <= max)
{
arr[i] = min;
i++;
min++;
}
return (arr);
}
