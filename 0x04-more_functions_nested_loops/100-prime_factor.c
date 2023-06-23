#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of a number
 *
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long foctoriel = 2;

	while (n > foctoriel)
	{
		if (n % foctoriel == 0)
		{
			n /= foctoriel;
		}
		else
		{
			n++;
		}
	}

	printf("%ld\n", foctoriel);

	return (0);
}

