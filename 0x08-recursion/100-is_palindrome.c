#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome_checker - palindrome
 *
 * Description : check the if a string could be reedin fromeach side.
 *
 * @s: the string to check.
 * @debute: the debute of the string.
 * @end: the end of the string.
 *
 * Return:1 if the debute equal the end continue the check if not return 0.
 */
int is_palindrome_checker(char *s, int debute, int end)
{
	if (debute >= end)
	{
		return (1);
	}
	if (s[debute] != s[end])
	{
		return (0);
	}
	return (is_palindrome_checker(s, debute + 1, end - 1));
}

/**
 * is_palindrome - palindrome
 *
 * Description : a function that returns 1 if a
 * string is a palindrome and 0 if not.
 *
 * @s: the string to check.
 *
 * Return:1 if a string is a palindrome and 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	return (is_palindrome_checker(s, 0, len - 1));
}
