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
int i = 0, j;
char letter[] = "AaEeOoTtLl";
char numbers[] = "4433007711";

while (str[i] != '\0')
{
for (j = 0; j <= 9; j++)
{
if (str[i] == letter[j])
{
str[i] = numbers[j];
}
}
i++;
}
return (str);
}
