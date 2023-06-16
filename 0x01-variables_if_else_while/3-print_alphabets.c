#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints the alphabet
 *
 * in lowercase followed by the alphabet in uppercase.
 *
 * Return: 0 as successful execution
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
