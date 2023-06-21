#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: integer whose last digit would be printed
 *
 * Return: returns last digit
 */

int print_last_digit(int i)
{
	int j;

	j = (i % 10);

	if (j < 0)
	{
		return (-j);
	}

	_putchar(j + '0');

	return (j);

}
