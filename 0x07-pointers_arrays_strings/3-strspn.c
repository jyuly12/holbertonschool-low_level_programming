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
int i, j = 0, var = 0;
unsigned int k = 0;
while (accept[j] != 0)
{
j++;
}
var = j;
for (i = 0; i <= var; i++)
{
for (j = 0; j < var; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
if (accept[j + 1] == '\0')
{
return (k);
}
}
}
return (k);
}
