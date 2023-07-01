#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers.
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, fib1, fib2, fib1_p1, fib1_p2, fib2_p1, fib2_p2;

	fib1 = 1;
	fib2 = 2;

	printf("%lu", fib1);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", fib2);
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;
	}

	fib1_p1 = fib1 / 1000000000;
	fib1_p2 = fib1 % 1000000000;
	fib2_p1 = fib2 / 1000000000;
	fib2_p2 = fib2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", fib2_p1 + (fib2_p2 / 1000000000));
		printf("%lu", fib2_p2 % 1000000000);
		fib2_p1 = fib2_p1 + fib1_p1;
		fib1_p1 = fib2_p1 - fib1_p1;
		fib2_p2 = fib2_p2 + fib1_p2;
		fib1_p2 = fib2_p2 - fib1_p2;
	}

	printf("\n");

	return (0);
}
