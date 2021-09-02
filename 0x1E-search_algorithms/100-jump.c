#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers
 *
 * @array: the array to be searched
 * @size: the length of the array
 * @value: the value to be searched in the array
 * Return: first index where value is located or -1 if Failed.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index = 0, position = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);
		index += position;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       index - position, index);

	index -= position;
	while (array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);
		index++;

		if (array[index] == value)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       index, array[index]);
			return (index);
		}
	}

	return (-1);
}
