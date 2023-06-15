#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints a specific
 * message to the standard error.
 *
 * Return: 1 as a successful execution.
 */
int main(void)
{
	const char *message;

	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, message, strlen(message));

	return (1);
}

