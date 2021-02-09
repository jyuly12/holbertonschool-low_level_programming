#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char j;
int s;
while (s <= 9)
{
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
_putchar('\n');
s++;
}
}
