#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: string to check.
 * @accept: substring.
 *
 * Return: Always value @k.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int k;

for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == accept[i])
{
k++;
break;
}
if (accept[j + 1] == '\0')
{
k++;
}
}
}
return (k);
}
