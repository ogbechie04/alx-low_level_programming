#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}

		if (i % 2 != 0)
		{
			continue;
		}

		_putchar(str[i + 2]);
	}

	_putchar('\n');
}