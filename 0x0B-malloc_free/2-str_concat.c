#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	size_t length_s1, length_s2;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s1 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	c = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}

	strcpy(c, s1);
	strcat(c, s2);

	return (c);
}
