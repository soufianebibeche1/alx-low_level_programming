#include <stdio.h>
#include "main.h"

/* Function: islower a function that checks for lowercase character */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
