#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: prefix
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0' && strchr(accept, s[i]))
	{
		i++;
	}

	return (i);
}
