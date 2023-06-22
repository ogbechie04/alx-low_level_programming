#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: This returns 0 if successful
 */

int main(void)
{
	int i;
	unsigned long j;
	unsigned long k;
	unsigned long l;

	j = 0;
	k = 1;

	for (i = 0; i < 50; i++)
	{
		l = j + k;
		j = k;
		k = l;

		printf("%lu", l);

		if (i == 49)
		{
			continue;
		}

		printf(", ");
	}

	printf("\n");

	return (0);
}
