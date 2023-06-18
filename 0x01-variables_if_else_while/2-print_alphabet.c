#include <stdio.h>

/**
 * main - This is the entry point
 * @i - This isa variable of the char data type
 *
 * Return: This returns 0 if successful
 */

int main(void)
{
	char i;

	i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
