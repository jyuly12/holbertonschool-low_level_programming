#include "holberton.h"

/**
 * leet - Function that encodes a string into 1337.
 *
 * @str: string.
 *
 * Return: Always str.
 */

char *leet(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] == 65 || str[i] == 97)
{
str[i] = 52;
}
if (str[i] == 69 || str[i] == 101)
{
str[i] = 51;
}
if (str[i] == 71 || str[i] == 111)
{
str[i] = 48;
}
if (str[i] == 84 || str[i] == 116)
{
str[i] = 55;
}
if (str[i] == 76 || str[i] == 108)
{
str[i] = 49;
}
i++;
}
return (str);
}
