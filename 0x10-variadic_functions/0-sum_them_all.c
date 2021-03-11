#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: constant.
 *
 * Return: add array.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0, j;
j = n;
if (n == 0)
{
return (0);
}
va_start(ap, n);
for (; j; j--)
i += va_arg(ap, int);
va_end(ap);
return (i);
}
