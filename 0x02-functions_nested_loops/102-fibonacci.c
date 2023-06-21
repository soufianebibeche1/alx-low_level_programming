#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the first 50 Fibonacci numbers,
 *
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long long fib1, fib2, fibn;

	fib1 = 1;
	fib2 = 2;

	printf("%llu, %llu", fib1, fib2);
	for (i = 3; i <= 50; i++)
	{
		fibn = fib2 + fib1;
		printf(", %llu", fibn);

		fib1 = fib2;
		fib2 = fibn;

	}

	printf("\n");

	return (0);
}

