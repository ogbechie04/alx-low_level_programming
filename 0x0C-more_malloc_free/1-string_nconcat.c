#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length = strlen(s2);

	if (n >= length)
		n = length;

	i = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (i == NULL)
		return (NULL);

	strcpy(i, s1);
	strncat(i, s2, n);

	i[strlen(s1) + n] = '\0';

	return (i);
}
