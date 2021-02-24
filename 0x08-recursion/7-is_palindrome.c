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
return (1);
}
}
/**
 * compare - compare original string and reverse.
 * @i: original string.
 * @j: result of der_palindrome
 *
 * Return: 1 if is palindrome and 0 if not.
 */
int compare(char *i, char j)
{
if (*i == *(j + i))
{
return (1);
}
if (*i != j)
{
return (0);
}
return (compare(i + 1, j + 1));
}
/**
 * is_palindrome - classify if is palindrome.
 * @s: string to classify.
 *
 * Return: 1 if is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
char n;
n = der_palindrome(s) - 1;
return (compare(s, --n));
}
