#include <stdio.h>

/**
 * print_fibonacci - Prints the Fibonacci sequence up to 98 terms.
 */
void print_fibonacci(void)
{
	unsigned int i;
	unsigned long int first = 1, second = 2, next;

	printf("%lu, %lu", first, second);

	for (i = 3; i <= 98; ++i)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	print_fibonacci();
	printf("\n");

	return 0;
}
