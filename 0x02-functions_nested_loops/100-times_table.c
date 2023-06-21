#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number where the table should end.
 *
 * Description: This function prints the n times table, starting with 0.
 */
void print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			putchar('0');
			for (mult = 1; mult <= n; ++mult)
			{
				putchar(',');
				putchar(' ');

				prod = num * mult;

				if (prod <= 9)
					putchar(' ');
				if (prod <= 99)
					putchar(' ');

				if (prod >= 100)
				{
					putchar((prod / 100) + '0');
					putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
					putchar((prod / 10) + '0');
				putchar((prod % 10) + '0');
			}
			putchar('\n');
		}
	}
}

