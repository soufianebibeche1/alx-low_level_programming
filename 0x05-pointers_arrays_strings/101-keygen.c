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
	char ch;
	
	srand(time(NULL));
	while (sum <= 2645)
	{
		ch = rand() % 128;
		sum += ch;
		putchar(ch);
	}

	putchar(2772 - sum);

    return (0);
}
