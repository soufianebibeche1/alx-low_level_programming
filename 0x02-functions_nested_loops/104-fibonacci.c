#include <stdio.h>

/**
 * numLength - returns the number of digits in a number
 *
 * @num: the number
 *
 * Return: number of digits
 */
int numLength(unsigned long long num)
{
	int length = 0;

	if (num == 0)
		return 1;

	while (num != 0)
	{
		num /= 10;
		length++;
	}

	return length;
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 * starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long long f1 = 1, f2 = 2, sum;

	for (count = 1; count <= 98; ++count)
	{
		printf("%llu", f1);

		if (count < 98)
			printf(", ");
		else
			printf("\n");

		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}

	return 0;
}
