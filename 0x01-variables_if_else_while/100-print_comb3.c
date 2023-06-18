#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: This returns 0 if suzzessful
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}
