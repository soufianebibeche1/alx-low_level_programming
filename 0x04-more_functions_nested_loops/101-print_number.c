#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int num_digits = 0;
	int temp, divisor, i;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	num_digits = 0;
	temp = n;

	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	divisor = 1;

	for ( i = 1; i < num_digits; i++)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
