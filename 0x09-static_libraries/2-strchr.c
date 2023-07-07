#include "main.h"
#include <string.h>

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
	return (strchr(s, c));
}
