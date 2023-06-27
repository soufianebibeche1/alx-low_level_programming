#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 100
#define MAX_CHAR_VALUE 127

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int password[PASSWORD_LENGTH];
    int sum = 0;
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH - 1; i++) {
        password[i] = rand() % (MAX_CHAR_VALUE + 1);
        sum += password[i];
        putchar(password[i] + '0');
    }

    putchar((2772 - sum) + '0');

    return 0;
}
