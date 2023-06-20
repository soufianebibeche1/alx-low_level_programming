#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C that prints _putchar, followed by a new line.
 *
 * Return: 0 as successful execution
 */

int main(void)
{
	char wordx[] = "_putchar";
	int cpt = 0;

	while (wordx[cpt] != '\0')
	{
		_putchar(wordx[cpt]);
		cpt++;
	}

	putchar('\n');
	return (0);
}
