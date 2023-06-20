#include <stdio.h>
#include "main.h"

/* Function: alpha a function that checks for alphan character */

int print_last_digit(int n)
{
	int _lastdegits;

	if (n < 0)
		n = -n;

	_lastdegits = n % 10;
	return (_lastdegits);
}
