#include "3-calc.h"

/**
 * op_add - sums two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: subtracted value
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: multiplied value
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divies two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: divided value
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of two integer
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
