#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Array of argument tokens.
 * Return: 0 on success, appropriate exit codes on failure.
 */
int main(int argc, char *argv[])
{
	int src, dest, read_bytes, write_bytes;
	mode_t file_mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(argv[1], O_RDONLY);
	if (src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]), exit(98);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, file_mode);
	if (dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((read_bytes = read(src, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(dest, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close src %d\n", src), exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close dest %d\n", dest), exit(100);
	}

	return (EXIT_SUCCESS);
}
