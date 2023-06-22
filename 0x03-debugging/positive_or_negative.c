#include <stdio.h>

/**
 * positive_or_negative - Entry point of the program
 *
 * Description: print the results
 *
 * @i : parametre the numbre that used to print
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}

	else
	{
		printf("%d is negative\n", i);
	}
}
