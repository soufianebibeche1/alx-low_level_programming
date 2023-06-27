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
	char password[PASS_FULL_LENGTH + 1];
	int i, randomChar;

	srand(time(NULL));

	for (i = 0; i < PASS_FULL_LENGTH; i++)
	{
		randomChar = rand() % 94 + 33;
		password[i] = (char)randomChar;
	}

	password[PASS_FULL_LENGTH] = '\0';
	printf("%s\n", password);

	return (0);
}
