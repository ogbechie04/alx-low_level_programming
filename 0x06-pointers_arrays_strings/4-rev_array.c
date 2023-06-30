#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array of integers
 * @n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int middle = n / 2;
	int temp;
	int i;

	for (i = 0; i <= middle; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
