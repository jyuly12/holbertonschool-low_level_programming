#include "holberton.h"
void times_table(void)
{
int m, r, f;
for (m = 48; m <= 57; m++)
{
for (r = 48; r <= 57; r++)
{
f = r*m;
_putchar(f);
if (r <= 57 && m <= 57)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
