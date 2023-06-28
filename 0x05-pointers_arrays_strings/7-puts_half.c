#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: string
 *
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int middle = length / 2;
	int n = (length - 1) / 2;
	int i, j;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
	{
		for (j = n + 1; j <= length; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (i = middle; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
