#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters of uppercase.
 *
 * @str: string.
 *
 * Return: Always str.
 */

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] -= 32;  
}
i++;
}
return (str);
}
