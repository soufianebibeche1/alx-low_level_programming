#include <stdio.h>
#include "main.h"

/**
 * factorial - factoriel
 *
 * Description : a function that returns the factorial of a given number.
 *
 * @n: the number to check.
 *
 * Return: an integers represent the factoriel.
 */
int factorial(int n)
{
	int facto;

	if (n < 0)
	{
		facto = -1;
		return (facto);
	}
	else if (n == 0)
	{
		facto = 1;
	}
	else
	{
		facto = n * factorial(n - 1);
	}

	return (facto);
}
