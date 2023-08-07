#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - prints a listint_t linked list
 * @filename: points to first node a list
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	char *buff;
	FILE *fp;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buff = (char *)malloc(letters + 1);
	if (buff == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buff, 1, letters, fp);
	if (bytes_read <= 0)
	{
		fclose(fp);
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written != bytes_read)
	{
		fclose(fp);
		free(buff);
		return (0);
	}

	fclose(fp);
	free(buff);

	return (bytes_written);
}
