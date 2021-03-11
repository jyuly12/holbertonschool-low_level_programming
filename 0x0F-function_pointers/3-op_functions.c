#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - add two integers
 * @a: number.
 * @b: number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - difference funcion.
 * @a: number.
 * @b: number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply two integers.
 * @a: number.
 * @b: number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide two integers.
 * @a: number.
 * @b: number.
 *
 * Return: division of a by b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - modulates two integers
 * @a: number.
 * @b: number.
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
