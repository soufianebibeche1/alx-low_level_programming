#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - encodes into 1337.
 *
 * Description: A function that encodes a string into rot13.
 *
 * @str: The string.
 *
 * Return: the new string encoded.
 */
#include <stdio.h>

char *rot13(char *str)
{
    int i, j;
    char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13_letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        while (letters[j] != '\0' && (letters[j] != str[i] && rot13_letters[j] != str[i]))
        {
            j++;
        }
        if (letters[j] == str[i])
        {
            str[i] = rot13_letters[j];
        }
        else if (rot13_letters[j] == str[i])
        {
            str[i] = letters[j];
        }
    }

    return str;
}
