#include "search_algos.h"

/**
* binary_search - searches for a value in an array of integers.
* @array: Is a pointer to the first element of the array to search.
* @size: Is the number of elements in array.
* @value: Is the value to search.
*
* Return: first index where value is located or -1 if Failed.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right, mid;

	if (array == NULL)
		return (-1);

    right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%i, ", array[i]);

		printf("%i\n", array[right]);

		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;

		else if (array[mid] > value)
			right = mid - 1;

		else
			return (mid);
	}
	return (-1);
}