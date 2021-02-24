#include "holberton.h"

/**
 * primenumber - find prime numbers.
 * @i: variable.
 * @j: number to check.
 *
 * Return: 1 if j is prime , 0 otherwise.
 *
 */
int primenumber(int i, int j)
{
if (i == j)
{
return (1);
}
if (j <= 1)
{
return (0);
}
if (j % i == 0)
{
return (0);
}
return (primenumber(i + 1, j));
}
/**
 * is_prime_number - categorize.
 * @n: number to check.
 *
 * Return: 1 if n is prime , 0 otherwise.
 */
int is_prime_number(int n)
{
return (primenumber(2, n));
}
