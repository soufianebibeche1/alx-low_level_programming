#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Description: This function prints the alphabet from 'a' to 'z'.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
