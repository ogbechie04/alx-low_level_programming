#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argumernt vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			count++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			count++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			count++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			count++;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
