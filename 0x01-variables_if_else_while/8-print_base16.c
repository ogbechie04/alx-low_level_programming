#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: This returns 0 if successful
 */

int main(void)
{
	char i;
	char j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
