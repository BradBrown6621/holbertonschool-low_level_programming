#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
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

	written = write(fd, text_content, text_len);

	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
