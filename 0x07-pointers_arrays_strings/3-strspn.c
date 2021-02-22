#include "holberton.h"
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, k;
while (s[i] != ' ')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
}
}
i++;
}
return (k);
}
