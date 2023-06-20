#include "main.h"

/**
 * _abs - This finds the absolute value of an integer
 *
 * @x: integer
 *
 * Return: + if x is positive, - if x is negative and 0 if x is 0
 */


int _abs(int x)
{
	if (x < 0)
	{
		return(-x);
	}
	else
	{
		return(x);
	}

	return (0);
}
