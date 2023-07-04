#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be searched
 * @accept: string containing the bytes to search for
 *
 * Return: number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}

	return ('\0');
}
