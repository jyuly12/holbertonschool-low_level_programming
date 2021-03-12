#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments.
 */
void print_all(const char *const format, ...)
{
unsigned int k = 0, j = 0;
char *ch;
va_list ap;
va_start(ap, format);
while (format[k] != '\0' && format != NULL)
{
switch (format[k])
{
case 'i':
printf("%d", va_arg(ap, int));
j = 1;
break;
case 'f':
printf("%f", va_arg(ap, double));
j = 1;
break;
case 'c':
printf("%c", va_arg(ap, int));
j = 1;
break;
case 's':
j = 1;
ch = va_arg(ap, char *);
if (ch == NULL)
{
ch = "(nil)";
}
printf("%s", ch);
break;
default:
j = 0;
}
if (format[k + 1] != '\0' && j == 1)
{
printf(", ");
}
k++;
}
va_end(ap);
printf("\n");
}
