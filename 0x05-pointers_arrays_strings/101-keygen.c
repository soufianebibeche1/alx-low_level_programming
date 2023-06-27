#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int password[16];
    int i;

    srand(time(NULL));

    for (i = 0; i < 15; i++) {
        password[i] = rand() % 94 + 33; // Generate a random ASCII value between 33 and 126
        putchar(password[i]);
    }

    password[15] = '\0'; // Null-terminate the password

    return 0;
}
