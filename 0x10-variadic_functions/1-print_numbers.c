#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator: is the string to be printed between numbers.
 * @n: number of the passed arguments
 * Description: function that prints numbers.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int arg;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
