#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_FULL_LENGTH 15
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <=2645)
	{
		c = rand() % 126;
		sum += c;
		putchar(c);
	}

	putchar(c2772 - sum);

	return (0);
}
