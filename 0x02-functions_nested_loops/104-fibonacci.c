#include <stdio.h>

/**
 * print_fibonacci - Prints the Fibonacci sequence up to a given number
 * @n: The number of Fibonacci sequence to print
 */
void print_fibonacci(int n)
{
	int i;
	unsigned long int a = 0, b = 1, next;

	for (i = 0; i < n; i++)
	{
		printf("%lu", b);

		if (i != n - 1)
			printf(", ");

		next = a + b;
		a = b;
		b = next;
	}

	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int limit;

	printf("Enter the limit for Fibonacci sequence: ");
	scanf("%d", &limit);

	print_fibonacci(limit);

	return 0;
}
