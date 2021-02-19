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
int i = 0, j = 0;
char letter[] = {AaEeOoTtLl}
char numbers[] = {4433007711}

while (str[i] != '\0')
{
while (j <= 4)
{
if (str[i] == letter[j])
{
str[i] = numbers[j];
}
j++;
}
i++;
}
return (str);
}
