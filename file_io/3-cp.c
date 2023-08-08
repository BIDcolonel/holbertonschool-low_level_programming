#include "main.h"

#define BUF_SIZE 1024

/**
 * error_exit - Print an error message and exit with a specific exit code
 * @exit_code: The exit code to use
 * @message: The error message to print
 * @file: The file name to include in the error message
 */
void error_exit(int exit_code, const char *message, const char *file)
{
	if (file != NULL)
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	else
		dprintf(STDERR_FILENO, "%s\n", message);

	exit(exit_code);
}

/**
 * main - Copy the content of one file to another
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file %s\n");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n");

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd\n", NULL);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd\n", NULL);

	return (0);
}
