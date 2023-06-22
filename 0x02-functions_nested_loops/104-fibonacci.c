#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	int i;
	unsigned int fibonacci[100] = {0}; // Array to store the Fibonacci numbers

	fibonacci[98] = 1; // Initialize the last element as 1
	fibonacci[97] = 2; // Initialize the second last element as 2

	// Calculate Fibonacci numbers using big number addition
	for (i = 96; i >= 0; i--)
	{
		fibonacci[i] += fibonacci[i + 1] / 1000000000; // Carry-over to the next digit
		fibonacci[i + 1] %= 1000000000; // Keep only the last 9 digits

		fibonacci[i] += fibonacci[i + 2]; // Perform addition
	}

	// Print the Fibonacci numbers
	for (i = 0; i < 99; i++)
	{
		printf("%u", fibonacci[i]);

		if (i != 98)
			printf(", ");
	}

	printf(" and more\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_fibonacci();

	return 0;
}
