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
int i = 0, j;

while (haystack[i] != '\0')
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i])
{
break;
}
else if (needle[j] == haystack[i])
{
return (haystack + i);
}
}
if (needle[0] == '\0')
{
return (haystack);
}
i++;
}
return (0);
}
