#include "holberton.h"
/**
 * _isdigit - Checks for a digit (0 through 9).
 *
 * @c: The character to be checked.
 *
 * Return: 1 characther digit , 0 is otherwise.
 *
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
