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
		printf("%08x: ", i);
		for (j = 0; j < 10 && i + j < size; j++)
			printf("%02x%s", b[i + j], (j % 2) ? " " : "");

		for (j = 0; j < 10 && i + j < size; j++)
			printf("%c", (b[i + j] >= 32 && b[i + j] <= 126) ? b[i + j] : '.');

		printf("\n");
	}

