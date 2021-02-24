#include "holberton.h"
/**
 * der_palindrome - reverse the string.
 * @a: string to revert.
 *
 *  Return: output string.
 */
int der_palindrome(char *a)
{
if (*a != '\0')
{
return (1 + der_palindrome(a + 1));
}
else
{
return (0);
}
}

/**
 * compare - compare original string and reverse.
 * @i: original string.
 * @j: result of der_palindrome
 * @n: parameter number.
 *
 * Return: 1 if is palindrome and 0 if not.
 */
int compare(char *i, int j, int n)
{
if (i[n] != i[j - n])
{
return (0);
}
if (n == j)
{
return (1);
}
return (compare(i, j, n + 1));
}
/**
 * is_palindrome - classify if is palindrome.
 * @s: string to classify.
 *
 * Return: 1 if is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
int n;
int i = 0;
n = der_palindrome(s) - 1;
return (compare(s, n, i));
}
