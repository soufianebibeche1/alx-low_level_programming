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
	int fib0, fib1, fibn, i;

	fib0 = 0;
	fib1 = 1;

	printf("%d, %d", fib0, fib1);
	for (i = 2; i < 50; i++)
	{
		fibn = fib1 + fib0;
		printf(", %d", fibn);

		fib0 = fib1;
		fib1 = fibn;

	}

	printf("\n");

	return (0);
}

