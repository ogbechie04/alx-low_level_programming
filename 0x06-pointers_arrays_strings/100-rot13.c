#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i;
	int j;

	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}
