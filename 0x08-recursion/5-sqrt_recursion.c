#include "main.h"

/**
 * sqrt_helper - square root function
 *
 * @n: number to find its square root
 * @i: possible square root
 *
 * Return: square root
 */

int sqrt_helper(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to find it's square root
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
