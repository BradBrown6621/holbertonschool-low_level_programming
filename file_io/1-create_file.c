#include "main.h"

/**
 * create_file - Creates a new file and fills it with content (if it doesn't already exist)
 *
 * @filename: Name of file to be made
 * @text_content: Text to be added to new file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_EXCL | O_RDWR, 0600);
	char *buffer;
	ssize_t textlen = strlen(text_content);
	ssize_t bytesWritten;

	if (fd == -1 || filename == NULL)
	{
		close(fd);
		return (0);
	}

	buffer = malloc(textlen + 1);

	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	strcpy(buffer, text_content);

	bytesWritten = write(fd, buffer, textlen);

	if (bytesWritten == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytesWritten);
}
