#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 *
 * @n: number of parameters
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, result = 0;

	va_list(numbers);
	va_start(numbers, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		result += va_arg(numbers, int);
	}

	va_end(numbers);
	return (result);
}
