#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned char *p;
	int nb_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nb_bytes = atoi(argv[1]);

	if (nb_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (unsigned char *)main;

	for (i = 0; i < nb_bytes; i++)
	{
		printf("%02x ", p[i]);
	}
	printf("\n");

	return (0);
}
