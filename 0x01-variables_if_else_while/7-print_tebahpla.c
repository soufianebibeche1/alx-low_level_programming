#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints the lowercase
 *
 * alphabet in reverse , followed by a new line.
 *
 * Return: 0 as successful execution
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
