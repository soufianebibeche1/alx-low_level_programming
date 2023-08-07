#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: points to first node a list
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 if the file created,-1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fpp;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (access(filename, F_OK) == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fpp = open(filename, O_WRONLY | O_APPEND);
	if (fpp == -1)
	{
		return (-1);
	}

	bytes_written = write(fpp, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fpp);
		return (-1);
	}

	close(fpp);
	return (1);
}
