#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, s, k;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (s = 48; s <= 57; s++)
{
for (k = 49; k <= 57; k++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(s);
putchar(k);
if (i <= 57 && j <= 57)
{
if (k < 57 || s <= 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
