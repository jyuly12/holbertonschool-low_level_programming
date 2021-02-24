#include "holberton.h"
/**
 * _sqrt_recursion - Natural square root of a number.
 * @n: number to calculate.
 *
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
return _sqrt_value (n, 1);
}
/**
 * _sqrt_value - Natural square root of a number.
 * @i: number to calculate.
 * @j: parameter.
 *
 * Return: square root.
 */
int _sqrt_value(int i, int j)
{
if (j * j == i)
{
return (j);
}
if (j * j > i)
{
return (-1);
}
return (_sqrt_value(i, j + 1));
}
