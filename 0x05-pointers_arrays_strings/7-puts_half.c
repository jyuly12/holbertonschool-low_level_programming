#include "holberton.h"
/**
 * puts_half - Prints half of a string.
 *
 * @str: input value
 */
void puts_half(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
;
}
for (a /= 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
