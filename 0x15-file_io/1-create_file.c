#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: points to first node a list
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 if the file created,-1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fpp;

	if (filename == NULL)
	{
		return (-1);
	}

	fpp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fpp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fpp, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fpp);
			return (-1);
		}
	}

	close(fpp);
	return (1);
}
