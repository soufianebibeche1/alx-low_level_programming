#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hrs, mins;

	hrs = 0;
	mins = 0;
	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
