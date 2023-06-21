#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}

	_putchar(sum);

	return (0);
}
