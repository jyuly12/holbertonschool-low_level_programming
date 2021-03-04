#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmemb: parameter.
 * @size: size to nmemb.
 *
 * Return: array @call or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *call;
unsigned int i, j;

j = nmemb * size;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

call = malloc(nmemb * size);

if (call == NULL)
{
return (NULL);
}

i = 0;
while (i < j)
{
call[i] = 0;
i++;
}
return (call);
}
