#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: finds and prints
 * the sum of the even-valued terms, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, fibn, sum;

	sum = 2;
	for (i = 3; i <= 4000000; i++)
	{
		fibn = fib2 + fib1;
		sum = sum + fibn;
		fib1 = fib2;
		fib2 = fibn;

	}

	printf("%ld\n", sum);

	return (0);

}
