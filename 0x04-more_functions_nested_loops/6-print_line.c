#include "holberton.h"
/**
 * print_numbers - Prints the numbers, from 0 to 9.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
  int lin;
  if (n > 0)
    {
      for (lin = 0; lin <= n; lin++)
      _putchar('_');
    }
  _putchar('\n'); 
}
