#include "main.h"

/**
 * print_number - number to be printed
 *
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else if (n >= 0 && n < 10)
	{
		i = n;
	}
	else if (n >= 10 && n < 100)
	{
		i = n;
		_putchar((i / 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		i = n;
		_putchar((i / 100) + '0');
		_putchar(((i / 10) % 10) + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		i = n;
		_putchar((i / 1000) + '0');
		_putchar(((i / 100) % 10) + '0');
		_putchar(((i / 10) % 10) + '0');
	}

	_putchar((i % 10) + '0');
}
