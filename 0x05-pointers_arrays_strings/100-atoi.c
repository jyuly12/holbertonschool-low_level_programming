#include "holberton.h"
/**
 * _atoi - Convert a string to an integer.
 * @s:  
 */
int _atoi(char *s)
{
int m = 0;
int i = -1;
int h = 0;
while (s[m] != '\0')
{
m++;
if (s[m] == '-')
{
i *= -1;
}
if (s[m] > 47 && s[m] < 58)
{
if (h < 0)
{
h = (h * 10) - (s[m] - '0');
}
else
{
h = (s[m] - '0') * -1;
}
if (s[m + 1] < 48 || s[m + 1] > 57)
{
break; 
}
}
if (i < 0)
{
h *= -1;
}
}
return (h);
}
