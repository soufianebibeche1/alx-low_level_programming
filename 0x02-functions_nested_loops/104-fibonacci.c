#include <stdio.h>

/**
 * print_comma_space - Prints a comma followed by a space
 */
void print_comma_space(void)
{
	printf(", ");
}

/**
 * print_fibonacci - Prints the Fibonacci sequence up to a given number
 * @n: The number of Fibonacci sequence to print
 */
void print_fibonacci(int n)
{
	int i, a = 1, b = 1, next;

	printf("1");

	for (i = 2; i <= n; i++)
	{
		printf("%d", a);
		if (i != n)
			print_comma_space();

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

