#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 *
 * @dest: string to be copied
 * @src: string to be copied
 * @n: index
 *
 * Return: returns copied result
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
