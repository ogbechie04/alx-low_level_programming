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

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}
