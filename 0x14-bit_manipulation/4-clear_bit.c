#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: paramether.
 * @index:  is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;


	if (index > sizeof(n) * 8)
		return (-1);

	tmp = 1 << index;

	*n = *n & ~tmp;

	return (1);
}
