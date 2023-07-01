#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_buffer - print a buffer.
 *
 * Description: A function that print content of a buffer.
 *
 * @b: The buffer.
 *
 * @size: The size.
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position of the first byte in hexadecimal with leading zeros */
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				/* Print the byte in hexadecimal format with leading zeros */
				printf("%02x", b[i + j]);
			}
			else
			{
				/* Print two spaces if the byte is beyond the buffer's size */
				printf("  ");
			}

			if (j % 2)
			{
				/* Add a space after printing two bytes for separation */
				printf(" ");
			}
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
				{
					/* Print the corresponding character if the byte is printable */
					printf("%c", b[i + j]);
				}
				else
				{
					/*/ Print a dot for non-printable characters */
					printf(".");
				}
			}
		}

		/* Print a new line after printing all bytes in the line */
		printf("\n");
	}
}
