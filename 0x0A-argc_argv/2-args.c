#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: number of arguments.
 * @argv: array of strings.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
