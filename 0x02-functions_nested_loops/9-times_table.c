#include "holberton.h"
/**
 * times_table - Prints the table.
 *
 */
void times_table(void)
{
int i, j, k, c, s;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
c = k / 10;
s = k % 10;
if (k < 10)
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(s + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(c + '0');
_putchar(s + '0');
}
}
_putchar('\n');
}
}
