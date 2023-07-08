#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Description : that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cents, totalCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	totalCoins += cents / 25;
	cents %= 25;

	totalCoins += cents / 10;
	cents %= 10;

	totalCoins += cents / 5;
	cents %= 5;

	totalCoins += cents;
	printf("%d\n", totalCoins);


	return (0);
}
