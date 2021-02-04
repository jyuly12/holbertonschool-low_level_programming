#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%lu. is negative\n", sizeof(n));
else if (n == 0)
printf("%lu. is zero\n", sizeof(n));
else if (n > 0)
printf("%lu. is positive \n", sizeof(n));
return (0);
}
