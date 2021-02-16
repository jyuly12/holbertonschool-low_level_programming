#include "holberton.h"
/**
 * rev_string - Reverses a string.
 *
 * @s: point.
 *
 */

void rev_string(char *s)
{
int i, c;
char h;

for (i = 0; s[i] != '\0'; i++)
;
for (i--, c = 0; c < i / 2; i--, c++)
{
h = s[c];
s[c] = s[i];
s[i] = h;
}
}
