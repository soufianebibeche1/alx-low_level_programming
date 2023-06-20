#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int result = row * column;

			if (column == 0)
			{
				putchar('0');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}

			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

	_putchar('\n');
	}
}
