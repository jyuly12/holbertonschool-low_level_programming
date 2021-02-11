#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 *
 *
 * Return: Void.
 */
void print_times_table(int n)
{
  int i, j, k, c, s;
  for (i = 0; i <= n; i++)
    {
      for (j = 0; j <= n; j++)
	{
	  k = i * j;
	  c = k / 10;
	  s = k % 10;
	  if (k < 10)
	    {
	      if (j != 0)
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		}
	      _putchar(s + '0');
	    }
	  else if (k >= 10 && k < 100)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(c + '0');
	      _putchar(s + '0');
	    }
	}
      _putchar('\n');
    }
}
