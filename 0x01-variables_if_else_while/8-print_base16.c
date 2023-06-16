#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints all the numbers
 *
 * of base 16 in lowercase, followed by a new line.
 *
 * Return: 0 as successful execution
 */

int main(void)
{
	int _num = 0;

	while (_num < 10)
	{
		putchar(_num + '0');
		_num++;
	}

	_num = 0;
	while (_num < 6)
	{
		putchar(_num + 'a');
		_num++;
	}

	putchar('\n');

	return (0);
}

