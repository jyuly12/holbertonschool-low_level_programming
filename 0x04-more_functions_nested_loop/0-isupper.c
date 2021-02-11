#include "holberton.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 characther uppercase , 0 is otherwise.
 *
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
