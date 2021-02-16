#include "holberton.h"
/**
 * print_rev - Prints a string in reverse.
 *
 * @s: input value
 */
void print_rev(char *s)
{
int j;
for (j = 0; s[j] != '\0'; j++)
;
while (j >= 0)
_putchar(s[j]);
j--;
_putchar('\n');
}
