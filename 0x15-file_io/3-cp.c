#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - checks the code.
 *
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 succes.
 */
int main(int argc, char *argv[])
{
	const char *src, *dest;
	int fd_src, fd_dest;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s src_file dest_file\n", argv[0]);
		return (97);
	}
	src = argv[1];
	dest = argv[2];
	fd_src = open(src, O_RDONLY);
	fd_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_src == -1 || fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open or create files\n");
		return (98);
	}
	while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		return (98);
	}
	if (close(fd_src) == -1 || close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		return (100);
	}
	return (0);
}
