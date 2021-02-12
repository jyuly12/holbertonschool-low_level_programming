#include <stdio.h>
/**
 * main - Print Fizz Buzz.
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num % 3 == 0) && (num % 5 == 0))
{
printf("FizzBuzz ");
}
else if (num % 3 == 0)
{
printf("Fizz ");
}
else if (num % 5 == 0)
{
if (num <= 99)
{
printf("Buzz ");
}
else
{
printf("Buzz");
}
}
else
{
printf("%d ", num);
}
}
printf("\n");
return (0);
}
