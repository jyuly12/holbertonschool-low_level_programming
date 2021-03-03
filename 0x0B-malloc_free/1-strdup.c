#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to duplicate.
 *
 * Return: string duplicate or NULL.
 */
char *_strdup(char *str)
{
char *dupl;
int i, j;

if (str == NULL)
{
return (NULL);
}

i = 1;
while (str[i] != '\0')
{
i++;
}

dupl = malloc(sizeof(char) * (i + 1));
if (dupl == NULL)
{
return (NULL);
}

j = 0;
while (j < i)
{
dupl[j] = str[j];
j++;
}

dupl[j] = '\0';

return (dupl);
}
