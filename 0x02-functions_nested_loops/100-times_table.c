#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: The character to be checked.
 *
 * Return: Void.
 */
void print_times_table(int n)
{
int i, j, k, c, s, l;
if (n <= 15 && n >= 0)
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
c = k / 10;
s = k % 10;
l = (k / 100) % 10;
if (k < 10)
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar(s + '0');
}
else if (k >= 10 && k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
_putchar(s + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(l + '0');
_putchar(c % 10 + '0');
_putchar(s + '0');
}
}
_putchar('\n');
}}
