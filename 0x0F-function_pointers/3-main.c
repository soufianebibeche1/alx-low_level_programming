#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *operators;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operators = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operators) == NULL || operators[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if ((*operators  == '/' && num2 == 0) || (*operators  == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(operators)(num1, num2);
	printf("%d\n", result);

	return (0);
}
