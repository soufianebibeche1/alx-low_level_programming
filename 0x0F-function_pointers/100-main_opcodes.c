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
	int nb_bytes, i;
	int (*mainptr)(int, char**) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb_bytes = atoi(argv[1]);

	if (nb_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb_bytes; i++)
	{
		opc = *(unsigned char *)mainptr;
		printf("%02x ", opc);

		if (i == nb_bytes - 1)
		{
			continue;
		}
		printf(" ");
		mainptr++;
	}

	printf("\n");

	return (0);
}
