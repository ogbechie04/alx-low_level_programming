#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name
 * @f: pointer to funtcion
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}

