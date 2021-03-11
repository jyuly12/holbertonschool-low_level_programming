#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: string.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
char *ch;
unsigned int i;

va_start(ap, n);

for (i = 1; i <= n; i++)
{
ch = va_arg(ap, char *);
if (ch != NULL)
printf("%s", ch);
else
printf("(nil)");

if (separator != NULL && i < n)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
