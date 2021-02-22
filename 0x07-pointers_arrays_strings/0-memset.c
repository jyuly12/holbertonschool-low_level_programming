#include "holberton.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: the address of memory to print.
 * @b: constant byte.
 * @n: bytes of the memory area pointed.
 *
 * Return: Always @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
