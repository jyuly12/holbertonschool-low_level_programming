#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: parameter value.
 *
 * Return: string @value or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *value;
unsigned int i = 0, j = 0, l = 0;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

i = 0;
while (s1[i] != '\0')
i++;

j = 0;
while (s2[j] != '\0' && j <= n)
j++;

if (j <= n)
n = j;

value = malloc(sizeof(char) * (i + n + 1));
if (value == NULL)
return (NULL);

i = 0;
while (s1[i] != '\0')
{
value[l] = s1[i];
i++;
l++;
}

j = 0;
while (s2[j] != '\0' && j <= n)
{
value[l] = s2[j];
j++;
l++;
}
value[l] = '\0';
return (value);
}
