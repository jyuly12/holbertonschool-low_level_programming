#include "holberton.h"
/**
 * print_most_numbers - Prints the numbers, ignore 2 and 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int numb;
for (numb = 0; numb <= 9; numb++)
{
if (numb != 2 && numb != 4)
_putchar(numb + '0');
}
_putchar('\n');
}
