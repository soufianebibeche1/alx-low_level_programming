#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Description: This function prints the alphabet from 'a' to 'z' x 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int cpt = 0;

	while (cpt < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		cpt++;
	}
}
