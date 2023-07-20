#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: number of argument passed
 * Description: function that returns the sum of all its parameters
 * Return: int represent the sum of passed arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, arg;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}

	va_end(args);
	return (sum);
}
