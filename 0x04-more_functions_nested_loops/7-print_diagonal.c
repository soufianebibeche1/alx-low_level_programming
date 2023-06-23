#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 *
 * Description: This function that draws a diagonal line on the terminal.
 *
 * @n: the number which we use to print.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
