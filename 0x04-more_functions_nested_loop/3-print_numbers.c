#include "holberton.h"
/**
 * print_numbers - Prints the numbers, from 0 to 9.
 *
 */
void print_numbers(void)
{
int numb;
for (numb = 0; numb <= 9; numb++)
{
_putchar(numb + '0');
}
_putchar('\n');
}
