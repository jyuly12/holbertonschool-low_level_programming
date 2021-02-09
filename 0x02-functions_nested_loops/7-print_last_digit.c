#include "holberton.h"
int print_last_digit(int d)
{
if (d < 0)
{
d = -(d % 10);
_putchar(d + '0');
}
else
{
d = d % 10;
_putchar(d + '0');
}
return (d);
}
