#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: string.
 * @s2: string.
 *
 * Return: strings concatenates or NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *c_value;
int i = 0, j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
c_value = malloc(sizeof(char) * (i + j + 1));
if (c_value == NULL)
{
return (NULL);
}
i = 0;
while (s1[i] != '\0')
{
c_value[i] = s1[i];
i++;
}
j = 0;
while (s2[j] != '\0')
{
c_value[i] = s2[j];
i++;
j++;
}
c_value[i] = '\0';
return (c_value);
}
