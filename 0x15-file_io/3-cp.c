#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024


/**
 * main - checks the code.
 *
 * Return: 0 succes.
 */
int main(int argc, char *argv[])
{
	const char *src_file, *new_file;
	int fp_src, fp_new;
	ssize_t bytes_read, bytes_written;
	char buff[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s src_file new_file\n", argv[0]);
		exit(97);
	}

	src_file = argv[1];
	new_file = argv[2];

	fp_src = open(src_file, O_RDONLY);
	if (fp_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}

	fp_new = open(new_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fp_new == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", new_file);
		close(fp_src);
		exit(99);
	}

	while ((bytes_read = read(fp_src, buff, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fp_new, buff, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", new_file);
			close(fp_src);
			close(fp_new);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		close(fp_src);
		close(fp_new);
		exit(98);
	}

	if (close(fp_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_src);
		exit(100);
	}

	if (close(fp_new) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_new);
		exit(100);
	}

	return (0);
}
