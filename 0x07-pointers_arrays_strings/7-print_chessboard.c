#include <stdio.h>
#include "main.h"


/**
 * print_chessboard - chessboard.
 *
 * Description: a function that prints the chessboard.
 *
 * @a: string searching into.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			putchar('\n');
		}

		putchar(a[i / 8][i % 8]);
	}
	putchar('\n');
}

