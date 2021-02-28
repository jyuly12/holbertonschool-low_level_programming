#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all arguments it receives.
 * @argc: number of arguments.
 * @argv: array of strings.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int i, j;
int add = 0;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[i]);
}
printf("%d\n", add);
}
return (0);
}
