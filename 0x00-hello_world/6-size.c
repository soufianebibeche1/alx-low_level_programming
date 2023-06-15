#include <stdio.h>

/**
 * main - debut programme
 *
 * Description: a C Programme displays size of Certain Datatypes.
 *
 * Return: Always 0 which mean everything runs correct
*/

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
