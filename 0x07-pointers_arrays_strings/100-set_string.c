#include <stdio.h>
#include "main.h"


/**
 * set_string - sets the value of a pointer.
 *
 * Description: a function that sets the value of a pointer to a char.
 *
 * @s: a pointer pointing to a pointer.
 * @to: the char to sets.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
