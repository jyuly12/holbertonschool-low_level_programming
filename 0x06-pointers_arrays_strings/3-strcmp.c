#include "holberton.h"

/**
 * _strcmp - Compares two strings.
 * @s1: string value to compare.
 * @s2: string value to compare.
 *
 * Return: Value.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, var;

while (s1[i] != 0 && s2[j] != 0)
{

if (s1[i] != s2[j])
{
var = s1[i] - s2[j];
return (var);
}

i++;
j++;
}

return (0);
}
