#include "holberton.h"
/**
 * _strstr - locates a substring.
 * @haystack: string to check.
 * @needle: substring to locate.
 *
 * Return: Always needle value into haystack.
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, var = 0;

while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
j = 0;
var = i;
while (needle[j] == haystack[var])
{
j++;
var++;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
if (needle[0] == '\0')
{
return (haystack);
}
i++;
}
return ('\0');
}
