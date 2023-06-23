#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int cpt = 0, temp, power, i;
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	
	temp = n;
	while (temp != 0)
	{
		cpt++;
		temp /= 10;
	}

	while (cpt > 0)
	{
		power = 1;
		for (i = 1; i < cpt; i++)
		{
			power *= 10;
		}

		_putchar((n / power) + '0');
		n %= power;
		cpt--;
	}
}
