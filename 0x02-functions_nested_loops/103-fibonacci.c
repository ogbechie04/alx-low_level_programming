#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: this returns 0 if successful
 */

int main(void)
{
	int i;
	unsigned long j, k, l, sum;

	j = 0;
	k = 1;
	sum = 0;

	for (i = 0; i < 50; i++)
	{
		l = j + k;
		j = k;
		k = l;

		if (l <= 4000000)
		{
			if (l % 2 == 0)
			{
				sum += l;
			}
		}
	}
	printf("%lu\n", sum);

	return (0);
}
