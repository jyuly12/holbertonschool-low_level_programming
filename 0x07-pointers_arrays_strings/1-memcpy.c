#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: bytes of the memory area.
 *
 * Return: always @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
