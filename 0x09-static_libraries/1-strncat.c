#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes for src
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
