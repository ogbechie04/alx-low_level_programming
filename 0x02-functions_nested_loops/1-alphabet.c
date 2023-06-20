#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - This is the prints the alphabets
 *
 * Return: This returns 0 if successful
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
