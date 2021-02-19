#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * @str: string.
 *
 * Return: Always str.
 */

char *rot13(char *str)
{
int i = 0, j;
char letter[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
char rotcode[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

while (str[i] != '\0')
{
for (j = 0; j <= 52; j++)
{
if (str[i] == letter[j])
{
str[i] = rotcode[j];
break;
}
}
i++;
}
return (str);
}
