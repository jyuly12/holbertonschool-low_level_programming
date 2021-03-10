#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: parameter to print
 * @f: pointer to function
 *
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
