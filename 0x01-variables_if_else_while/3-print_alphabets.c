/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
char t = 'a';
char c = 'A';
for (t = 'a'; t <= 'z'; t++)
putchar(t);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
