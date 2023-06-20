#include <stdio.h>
#include "main.h"

/* Function: alpha a function that checks for alphan character */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
