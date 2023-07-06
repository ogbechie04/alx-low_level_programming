#include "main.h"

/**
 * _prime - checks if the number is a prime
 *
 * @n: integer
 * @i: integer
 *
 * Return: 1 if prime, 0 if not
 */

int _prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if ((n % i == 0) && (i > 0))
	{
		return (0);
	}
	return (_prime(n, i - 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 *
 * @n: integer to check if prime
 *
 * Return: 1 if prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}
