#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of a number
 *
 * Return: 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime_factor = 2;

	while (number > largest_prime_factor)
	{
		if (number % largest_prime_factor == 0)
		{
			number /= largest_prime_factor;
		}
		else
		{
			largest_prime_factor++;
		}
	}

	printf("%ld\n", largest_prime_factor);

	return (0);
}
