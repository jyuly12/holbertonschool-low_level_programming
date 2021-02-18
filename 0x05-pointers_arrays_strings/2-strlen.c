#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: string value.
 *
 * Return: Always a.
 */

int _strlen(char *s)
{
int a;
while (s[a] != '\0')
{
a++;
}
return (a);
}
