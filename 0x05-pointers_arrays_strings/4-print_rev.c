#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string
 */

void print_rev(char *s)
{
	strrev(s);
	puts(s);
}
