#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *pts;

	va_list(p_strings);
	va_start(p_strings, n);

	for (i = 0; i < n; i++)
	{
		pts = va_arg(p_strings, char*);

		if (pts != NULL)
		{
			printf("%s", pts);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(p_strings);
	printf("\n");
}
