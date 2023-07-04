#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: The haystack
 * @needle: The needle
 *
 * Return: Returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
