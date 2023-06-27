#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum;
	char charcater;

	srand(time(NULL));
	while (sum <= 2645)
	{
		charcater = rand() % 120;
		sum += charcater;
		putchar(charcater);
	}

	putchar(2772 - sum);

	return (0);
}
