#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int j;

	for (j = 0; j <= n; j++)
	{
		if (n <= 0)
		{
			break;
		}

		_putchar('_');
	}

	_putchar('\n');
}
