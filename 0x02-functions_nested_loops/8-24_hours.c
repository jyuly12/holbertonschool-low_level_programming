#include "holberton.h"
/**
 * jack_bauer - Prints every minute of the day.
 */
void jack_bauer(void)
{
int m, h, t, s;
for (h = 48; h <= 50; h++)
{
for (t = 48; t <= 57; t++)
{
for (m = 48; m <= 53; m++)
{
for (s = 48; s <= 57; s++)
{
if (h < 50 || t <= 51)
{
_putchar(h);
_putchar(t);
_putchar(':');
_putchar(m);
_putchar(s);
_putchar('\n');
}
}
}
}
}
}
