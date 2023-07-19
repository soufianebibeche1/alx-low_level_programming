#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: a name to print
 * @f: a pointer to a function that take string and return void
 * Description: function that prints a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
