#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (i - 1); j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

	_putchar('\n');

}