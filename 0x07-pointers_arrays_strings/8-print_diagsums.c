#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: array
 * @size: size of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += *(a + i * size + j);
			}
		}
	}
	printf("%d, ", sum);

	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == (size - 1 - i))
			{
				sum += *(a + i * size + j);
			}
		}
	}
	printf("%d\n", sum);
}
