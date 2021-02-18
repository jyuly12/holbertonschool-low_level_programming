#include "holberton.h"

/**
 * _strncpy - Function that copies a string.
 *
 * @dest: string value.
 * @src: string value.
 * @n: parameter value.
 *
 * Return: Always dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (src[j] != '\0' && i < n)
{
dest[i] = src[j];
j++;
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
