#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 *
 * Description : a program that adds positive numbers.
 *
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			printf("Error\n");
			return 1;
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	
	printf("%d\n", sum);
	return 0;
}
