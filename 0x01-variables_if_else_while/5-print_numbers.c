#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints all single digit
 *
 * numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: 0 as successful execution
 */

int main(void)
{
	int _num = 0;

	while (_num < 10)
	{
		printf("%d", _num);
		_num++;
	}
	printf("\n");

	return (0);
}
