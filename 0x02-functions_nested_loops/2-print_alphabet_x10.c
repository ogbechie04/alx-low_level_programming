#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - This prints the alphabets 10times
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
	}
}
