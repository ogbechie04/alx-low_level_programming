#include "main.h"

/**
 * _isalpha - This checks if a character is an alphabet
 *
 * @c: the character to check
 *
 * Return: This returns 1 if it is an alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
