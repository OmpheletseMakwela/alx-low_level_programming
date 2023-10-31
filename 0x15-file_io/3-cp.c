#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message to stderr
 * @code: The exit code.
 * @format: The error message format.
 * @...: The variable arguments for the format.
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - Copy the content of one file to another.
 * @argc: int
 * @argv: char pointer
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(source_fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", source_fd);
	if (close(dest_fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", dest_fd);
	return (0);
}
