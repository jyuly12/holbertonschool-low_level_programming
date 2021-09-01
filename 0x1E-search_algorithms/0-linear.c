#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers.
* @array: Is a pointer to the first element of the array to search.
* @size: Is the number of elements in array.
* @value: Is the value to search.
*
* Return: first index where value is located or -1 if Failed.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
