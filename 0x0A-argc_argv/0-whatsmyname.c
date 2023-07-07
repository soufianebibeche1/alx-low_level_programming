#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Description : a program that print its own name.
 *
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])

{
	printf("%s\n", argv[0]);
	return (0);
}

