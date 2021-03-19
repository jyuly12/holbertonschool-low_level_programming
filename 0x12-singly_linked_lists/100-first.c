#include <stdio.h>

void _first(void) __attribute__((constructor));
/**
 * _first - print string before main file.
 *
 * Return: Nothing.
 */
void _first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
