#include "holberton.h"
/**
 * print_rev - Prints a string in reverse.
 *
 * @s: input value
 */
void print_rev(char *s)
{
int j;
while (s[j] != '\0')
{
j++;
}
while (j >= 0)
{
_putchar(s[j]);
_putchar('\0');
j--;
}
_putchar('\n');
}
