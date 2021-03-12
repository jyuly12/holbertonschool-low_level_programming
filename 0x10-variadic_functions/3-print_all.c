#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
unsigned int k = 0;
char *ch;
va_list ap;

va_start(ap, format);
k = 0;
while (format[k] && format != NULL)
{
switch (format[k])
{
case 's':
ch = va_arg(ap, char *);
if (ch == NULL)
{
printf("(nil)");
break;
}
printf("%s", ch);
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 'c':
printf("%c", va_arg(ap, int));
break;
default:
k++;
continue;
}
if (format[k + 1] != '\0')
{
printf(", ");
}
k++;
}
printf("\n");
va_end(ap);
}
