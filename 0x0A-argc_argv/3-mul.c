#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Description : a program that multiplies two numbers.
 *
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
