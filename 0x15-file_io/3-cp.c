#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * exitWithError - Print an error message and exit with a given code
 * @code: The exit code
 * @message: The error message
 */
void exitWithError(int code, const char *message)
{
	dprintf(2, "%s\n", message);
	exit(code);
}

/**
 * main - Copy the content of one file to another
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, other values on error
 */
int main(int argc, char *argv[])
{
	int fdFrom, fdTo;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;
	const char *fileFrom = argv[1];
	const char *fileTo = argv[2];

	if (argc != 3)
		exitWithError(97, "Usage: cp file_from file_to");
	fdFrom = open(fileFrom, O_RDONLY);
	if (fdFrom == -1)
	{
		exitWithError(98, "Error: Can't read from file %s");
	}

	fdTo = open(fileTo, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdTo == -1)
	{
		exitWithError(99, "Error: Can't write to file %s");
	}
	while ((bytesRead = read(fdFrom, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fdTo, buffer, bytesRead);
		if (bytesWritten == -1)
			exitWithError(99, "Error: Can't write to file %s");
	}
	if (bytesRead == -1)
	{
		exitWithError(99, "Error: Can't read from file %s");
	}
	if (close(fdFrom) == -1)
	{
		exitWithError(100, "Error: Can't close fd %d");
	}
	if (close(fdTo) == -1)
	{
		exitWithError(100, "Error: Can't close fd %d");
	}
	return (0);
}
