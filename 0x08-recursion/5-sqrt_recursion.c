#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - calculate square
 *
 * Description : calculate square.
 *
 * @n: the number to check.
 *
 * Return: an integers represent the natural square root.
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - natural square root
 *
 * Description : Write a function that returns
 * the natural square root of a number.
 *
 * @n: the number to check.
 * @x: teh nowber to test the square.
 *
 * Return: an integers represent the natural square root.
 */
int square(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (square(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
