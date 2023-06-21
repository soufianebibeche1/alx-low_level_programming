#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int printfibonacci(int n)
{
	int fibunaccinumb;
	
	if (n == 0)
	{
		fibunaccinumb = 0;
	}
	else if (n == 1)
	{
		fibunaccinumb = 1;
	}
	else
	{
		fibunaccinumb = printfibonacci(n - 1) + printfibonacci(n - 2);
	}
	return (fibunaccinumb);
}
int main(void)
{
	int n;

	n = printfibonacci(50);
	printf("\n");

	return (0);
}

