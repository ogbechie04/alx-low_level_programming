#include "main.h"

/**
 * _islower - This checks if the letter is lowercase
 *
 * @c: letter to be checked
 *
 * Return: this returns 1 if lower and 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
