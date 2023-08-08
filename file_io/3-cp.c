#include "main.h"

/**
 * print_error_exit - Print an error message and exit
 * @exit_code: The exit code to use
 * @message: The error message format string
 * @file: The file name to include in the error message
 */
void print_error_exit(int exit_code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another file
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];
	struct stat st;

	if (argc != 3)
		print_error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IROTH);
	if (fd_to == -1)
		print_error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (fstat(fd_from, &st) == -1)
		print_error_exit(100, "Error: Can't get file status for %s\n", argv[1]);

	if (close(fd_from) == -1)
		print_error_exit(100, "Error: Can't close fd %d\n", "");

	if (close(fd_to) == -1)
		print_error_exit(100, "Error: Can't close fd %d\n", "");

	if (chmod(argv[2], st.st_mode) == -1)
		print_error_exit(100, "Error: Can't change permissions of %s\n", argv[2]);

	return (0);
}
