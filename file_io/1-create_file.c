#include "main.h"

/**
 * create_file - Creates a new file and fills it with content
 *
 * @filename: Name of file to be made
 * @text_content: Text to be added to new file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t bytesWritten;

	if (fd == -1 || filename == NULL)
	{
		close(fd);
		return (-1);
	}

	bytesWritten = write(fd, text_content, strlen(text_content));

	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
