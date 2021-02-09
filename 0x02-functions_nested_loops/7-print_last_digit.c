#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @d: The character to be checked.
 *
 * Return: Always d.
 */
int print_last_digit(int d)
{
if (d < 0)
{
d = -(d % 10);
_putchar(d + '0');
}
else
{
d = d % 10;
_putchar(d + '0');
}
return (d);
}
