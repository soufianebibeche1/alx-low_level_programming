#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomCharType = rand() % 3;
        switch (randomCharType)
        {
		
            case 0:
                password[i] = 'A' + rand() % 26;
                break;
            case 1:
                password[i] = 'a' + rand() % 26;
                break;
            case 2:
                password[i] = '0' + rand() % 10;
                break;
        }
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s", password);

    return 0;
}
