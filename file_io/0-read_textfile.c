#include "main.h"

/**
 * read_textfile - Prints text in file to standard output
 *
 * @filename: The pointer to the file in memory
 * @letters: The number of bytes to print
 *
 * Return: Number of characters read and printed, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Opens filename in readonly and returns the file descriptor */
	int fd = open(filename, O_RDONLY);
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	/* Checks if open() failed or if filename points to NULL */
	if (fd == -1 || filename == NULL)
	{
		close(fd);
		return (0);
	}
	
	/* Creates a space in memory to read and write data to */
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	
	if (bytesRead == -1 || bytesWritten == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytesWritten);
}
