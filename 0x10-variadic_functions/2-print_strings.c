#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: is the string to be printed between numbers.
 * @n: the number of arguments passed to function.
 * Description: function that prints strings.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *arg;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char*);

		if (arg != NULL)
		{
			printf("%s", arg);
		}
		else
		{
			printf("(nil)");
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
