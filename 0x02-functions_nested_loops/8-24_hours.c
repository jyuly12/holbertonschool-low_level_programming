#include "holberton.h"
void jack_bauer(void)
{
int m, h, t, s;
for (h = 48; h <= 50; h++)
{
for (t = 48; t <= 51; t++)
{
for (m = 48; m <= 53; m++)
{
for (s = 48; s <= 57; s++)
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
