#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(p_numbers);
	va_start(p_numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p_numbers, int));

		if (separator != NULL && i < (n - 1))
		{
		printf("%s", separator);
		}
	}

	printf("\n");
}
