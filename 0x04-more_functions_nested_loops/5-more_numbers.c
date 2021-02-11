#include "holberton.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int numb, count;
for (count = 0; count <= 10; count++)
{
for (numb = 0; numb <= 14; numb++)
{
if (numb > 9)
_putchar((numb / 10) + '0');
_putchar((numb % 10) + '0');
}
_putchar('\n');
}
}
