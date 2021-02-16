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
j = j - 1;
}
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
