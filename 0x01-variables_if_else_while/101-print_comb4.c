#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, s;
for (i = 48; i <= 57; i++)
{
for (j = 49; j <= 57; j++)
{
for (s = 50; s <= 57; s++)
{
if (i < j && j < s)
{
putchar(i);
putchar(j);
putchar(s);
if (i < 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
