#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers.
 * @argc: Number of arguments.
 * @argv: Array of strings.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
}
return (0);
}
