#include "holberton.h"
/**
 * rev_string - Reverses a string.
 *
 * @s: point parameter.
 *
 */
void rev_string(char *s)
{
int a, b, c;
char var;

for (a = 0; s[a] != '\0'; a++)
;
c = a;
for (a--, b = 0; b < c / 2; a--, b++)
{
var = s[b];
s[b] = s[a];
s[a] = var;
}
}
