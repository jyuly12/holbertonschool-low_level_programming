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
int i = 0, j, k;
while (s[i] != ' ')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
}
i++;
}
return (k);
}
