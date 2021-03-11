#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: add array.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0, j;

va_start(ap, n);

for (j = 1; j <= n; j++)
{
i = va_arg(ap, int);
printf("%d", i);
if (separator != NULL && j < n)
{
printf("%s", separator);
}
}

va_end(ap);

printf("\n");
}
