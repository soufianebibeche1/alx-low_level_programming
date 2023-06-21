#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: finds and prints the sum
 *
 * of the even-valued terms, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long fib1 = 1, fib2 = 2, fibn = 0, sum = 2;

	while (fibn <= 4000000)
	{
		fibn = fib2 + fib1;

		if (fibn % 2 == 0)
		{
			sum += fibn;
		}

		fib1 = fib2;
		fib2 = fibn;
	}

	printf("%ld\n", sum);

	return (0);
}
