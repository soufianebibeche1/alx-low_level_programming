#include <stdio.h>

/**
 * fibonacci - Calculates the Fibonacci number recursively.
 * @n: The position of the Fibonacci number to calculate.
 *
 * Return: The Fibonacci number at position n.
 */
unsigned long int fibonacci(unsigned int n)
{
	if (n <= 1)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * printFibonacciSequence - Prints the Fibonacci sequence up to n terms.
 * @n: The number of terms to print.
 */
void printFibonacciSequence(int n)
{
	printf("Fibonacci Sequence up to %d terms:\n", n);

	for (int i = 0; i < n; ++i)
		printf("%lu ", fibonacci(i));
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	printFibonacciSequence(98);

	return 0;
}

