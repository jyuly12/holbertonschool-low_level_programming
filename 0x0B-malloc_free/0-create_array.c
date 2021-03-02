#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars.
 * @size: array size.
 * @c: array input.
 *
 * Return: if size is 0 its NULL , otherwise char @ch.
 */

char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int i;
if (size == 0)
{
return ('\0');
}
else
{
ch = malloc(size * sizeof(char));
}
i = 0;
while (i < size)
{
ch[i] = c;
i++;
}
return (ch);
}
