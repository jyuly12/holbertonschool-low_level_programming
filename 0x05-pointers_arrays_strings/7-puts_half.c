#include "holberton.h"
/**
 * puts_half - Prints half of a string.
 *
 * @str: input value
 */
void puts_half(char *str)
{
int i = 0, j = 0;

while (str[i] != '\0')
i++;
if (i % 2 == 0)
{
j = i / 2;
}
else
{
j = (i + 1) / 2;
}

 for (i--; j <= i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
