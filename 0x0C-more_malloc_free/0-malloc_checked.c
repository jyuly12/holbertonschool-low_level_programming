#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory.
 * @b: malloc conditions.
 *
 * Return: always @cn.
 */
void *malloc_checked(unsigned int b)
{
char *cn;

cn = malloc(b);
if (cn == NULL)
{
exit(98);
}
return (cn);
}
