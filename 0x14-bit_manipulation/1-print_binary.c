#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to modify.
 *
 * Return: binary number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int num = 0, i;

	if (n == 0)
		_putchar ('0');

	while (tmp > 0)
	{
		tmp = tmp >> 1;
		num++;
	}
	num--;
	while (num >= 0)
	{
		i = n >> num;
		if (i & 1)
			_putchar('1');
		else
			_putchar('0');
		num--;
	}
}
