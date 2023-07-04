#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character to locate
 *
 * Return: c if in the string and NULL if not
 *
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return ('\0');
}
