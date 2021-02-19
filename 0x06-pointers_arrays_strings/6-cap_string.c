#include "holberton.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @sr: string.
 *
 * Return: always sr.
 */
char *cap_string(char *sr)
{
int i = 0;

while (sr[i] != '\0')
{
if ((sr[i] >= 'a' && sr[i] <= 'z') && (sr[i - 1] == ',' ||
sr[i - 1] == ';' || sr[i - 1] == '.' || sr[i - 1] == '!' ||
sr[i - 1] == '?' || sr[i - 1] == '"' || sr[i - 1] == '(' ||
sr[i - 1] == ')' || sr[i - 1] == '{' || sr[i - 1] == '}' ||
sr[i - 1] == ' ' || sr[i - 1] == '\n'))
{
sr[i] -= 32;
}
if (sr[i] == '\t')
{
sr[i] = ' ';
}
i++;
}
return (sr);
}
