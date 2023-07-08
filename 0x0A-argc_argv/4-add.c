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
int main(int argc, __attribute__((unused))char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}

	printf("%d\n", sum);
	return (0);
}
