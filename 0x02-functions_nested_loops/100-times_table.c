#include "main.h"

/**
 * print_times_table - prints the times table
 *
 * @n: number of times table to be printed
 *
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (j = 0; j <= n; j++)
	{
		if (n >= 15)
		{
			break;
		}

		for (i = 0; i <= n; i++)
		{
			k = j * i;

			if (i == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
