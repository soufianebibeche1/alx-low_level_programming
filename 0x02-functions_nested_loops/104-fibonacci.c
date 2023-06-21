#include <stdio.h>

/**
 * print_fibonacci - Prints the Fibonacci sequence up to the specified number of terms.
 * @terms: The number of terms to print.
 */
void print_fibonacci(int terms)
{
	int fib1 = 1, fib2 = 2;

	if (terms >= 1)
		printf("%d", fib1);

	if (terms >= 2)
		printf(", %d", fib2);

	if (terms > 2)
	{
		for (int i = 3; i <= terms; i++)
		{
			int fib = fib1 + fib2;
			printf(", %d", fib);
			fib1 = fib2;
			fib2 = fib;
		}
	}

	printf("\n");
}

int main(void)
{
	print_fibonacci(98);
	return 0;
}

