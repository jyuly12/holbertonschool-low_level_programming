#include "holberton.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: number.
 * @m: number.
 * Return:number of bits you need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int temp = n ^ m;

	while (temp > 0)
	{
		if (temp & 1)
			i++;

		temp = temp >> 1;
	}
	return (i);
}
