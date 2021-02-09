#include "holberton.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @c: The character to be checked.
 *
 * Return: always c.
 */
int _abs(int c)
{
if (c < 0)
{
c = c * -1;
return (c);
}
else
{
return (c);
}
}
