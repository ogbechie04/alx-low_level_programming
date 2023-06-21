#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
	int minute;
	int seconds;

	for (minute = 0; minute <= 23; minute++)
	{
		for (seconds = 0; seconds <= 59; seconds++)
		{
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar(':');
			_putchar((seconds / 10) + '0');
			_putchar((seconds % 10) + '0');
			_putchar('\n');
		}
	}
}
