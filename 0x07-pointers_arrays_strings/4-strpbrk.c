#include "holberton.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: string to check.
 * @accept: string to compare.
 *
 * Return: Pointer s or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return ('\0');
}
