#include "main.h"

/**
 * append_text_to_file - Entry point
 *
 * @filename: Name of file to be accessed
 * @text_content: String to be copied to the end of filename
 *
 * Return: 1 if successful, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written;
	int text_len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		if (fd == -1)
		{
			return (-1);
		}
		return (0);
	}

	written = write(fd, text_content, text_len);

	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
