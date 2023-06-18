#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: This returns 0 if successful
 */

int main(void)
{
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}

	putchar(57);

	return (0);
}
