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
	int fib1, fib2, fibn, i;

	fib1 = 1;
	fib2 = 1;

	printf("%d, %d", fib1, fib2);
	for (i = 3; i <= 50; i++)
	{
		fibn = fib2 + fib1;
		printf(", %d", fibn);

		fib1 = fib2;
		fib2 = fibn;

	}

	printf("\n");

	return (0);
}

