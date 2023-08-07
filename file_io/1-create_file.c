#include "main.h"

/**
 * create_file - Creates a file and writes a NULL-terminated string into it
 * @filename: The name of the file to create
 * @text_content: The NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len, write_res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len]; text_len++)
			continue;

		write_res = write(fd, text_content, text_len);
		if (write_res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
