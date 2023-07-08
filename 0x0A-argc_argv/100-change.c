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
	int i, cents, totalCoins;
	int coins[] = {25, 10, 5, 2, 1};

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
	for ( i = 0; i < 5; i++)
	{
		totalCoins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", totalCoins);

	return (0);
}
