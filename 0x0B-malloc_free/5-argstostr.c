#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: ...
 * @av: ...
 *
 * Return: all arguments or NULL.
 */
char *argstostr(int ac, char **av)
{
int i, j, n, count;
char *cn;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
count++;
j++;
}
count++;
}
cn = malloc(sizeof(char) * count + 1);
if (cn == NULL)
{
return (NULL);
}
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
cn[n++] = av[i][j];
j++;
}
}
cn[n++] = '\n';
i++;
}
cn[n] = '\0';
return (cn);
}
