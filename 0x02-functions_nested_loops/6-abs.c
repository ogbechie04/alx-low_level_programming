#include "main.h"

/**
 * _abs - This finds the absolute value of an integer
 *
 * @x: integer
 *
 * Return: 0 if successful
 */


int _abs(int x)
{
	if (x < 0)
	{
		_putchar(-x);
	}
	else
	{
		_putchar(x);
	}

	return (0);
}
