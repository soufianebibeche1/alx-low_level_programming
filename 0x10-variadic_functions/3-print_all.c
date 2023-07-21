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
	int i = 0, chk;
	char *str;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				chk = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				chk = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				chk = 0;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				chk = 0;
				break;
			default:
				chk = 1;
				break;
		}
		i++;
		if (format[i + 1] != '\0' && chk == 0)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
