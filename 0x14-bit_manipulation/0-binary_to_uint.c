#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars.
 *
 * Return: converted number or 0 if it fails.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		num = num << 1;

		if (b[i] != 48 && b[i] != 49)
			return (0);

		else if (b[i] == '1')
			num = num | 1;

		i++;
	}
	return (num);
}
