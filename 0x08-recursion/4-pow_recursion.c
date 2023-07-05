#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - x raised to the power of y
 *
 * Description : a function that returns the
 * value of x raised to the power of y.
 *
 * @x: the number to check.
 *
 * @y: the number to check.
 *
 * Return: an integers represent the x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
