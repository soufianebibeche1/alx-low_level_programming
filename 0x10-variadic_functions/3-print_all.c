#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Entry point
 * @format: list of types of arguments passed to the function
 * Description: function that prints anything.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;
	char *str;

	va_start(args, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
				} else
				{
					printf("%s", str);
				}
				break;
			default:
				break;
		}
		p++;

		if (*p != '\0')
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
