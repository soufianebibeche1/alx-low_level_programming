#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A C program that that prints the alphabet in lowercase,
 *
 * followed by a new line.
 *
 * Return: 0 as successful execution
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
