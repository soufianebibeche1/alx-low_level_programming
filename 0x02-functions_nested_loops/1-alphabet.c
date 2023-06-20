#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Description: function that prints the alphabet, in lowercas.
 *
 * Return: 0 as succes
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
