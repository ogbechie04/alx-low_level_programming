#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 *
 * @n: array
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= 32;
		}
	}

	return (n);
}
