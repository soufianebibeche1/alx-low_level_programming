#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of a number
 *
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long factoriels = 2;

	while (n > factoriels)
	{
		if (n % factoriels == 0)
		{
			n /= factoriels;
		}
		else
		{
			factoriels++;
		}
	}

	printf("%ld\n", factoriels);

	return (0);
}
