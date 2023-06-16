#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints all possible
 * different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _numx, _numy;

	for (_numx = 0; _numx < 10; _numx++)
	{
		for (_numy = _numx + 1; _numy < 10; _numy++)
		{
			if (_numx != _numy)
			{
				putchar(_numx + '0');
				putchar(_numy + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
