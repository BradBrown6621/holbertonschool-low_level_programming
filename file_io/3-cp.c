#include "main.h"

/**
 * main - copies the content from file 1 to file 2
 *
 * @argc: int num of args
 * @argv: pointer to array of args
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_1;
	int fd_2;
	int charsRead;
	int charsWritten;
	char buf[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		error_msg("Usage: cp file_from file_to", NULL, 97, 0, 0);
	}

	fd_1 = open(argv[1], O_RDONLY);

	if (fd_1 == -1)
	{
		error_msg("Error: Can't read from file ", argv[1], 98, 0, 0);
	}

	fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd_2 == -1)
	{
		error_msg("Error: Can't write to ", argv[2], 99, fd_1, fd_2);
	}

	while ((charsRead = read(fd_1, buf, BUFSIZE)) > 0)
	{
		charsWritten = write(fd_2, buf, charsRead);
		
		if (charsWritten == -1)
		{
			error_msg("Error: Can't write to ", argv[2], 99, fd_1, fd_2);
		}
	}

	if (charsRead == -1)
	{
		error_msg("Error: Can't read from file ", argv[1], 98, fd_1, fd_2);
	}
	close_fd(fd_1, fd_2);
	return (0);
}

/**
 * close_fd - closes file descriptors
 *
 * @fd_1: File descriptor to be closed
 * @fd_2: File descriptor to be closed
 */

void close_fd(int fd_1, int fd_2)
{
	if (fd_1 && close(fd_1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1), exit(100);
	}
	if (fd_2 && close(fd_2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2), exit(100);
	}
}

/**
 * error_msg - prints error message, closes fds, and exits
 *
 * @message: Error message to be printed
 * @file: Name of file that caused error, if applicable
 * @exit_code: Exit code
 * @fd_1: File descriptor to be closed
 * @fd_2: File descriptor to be closed
 */

void error_msg(char *message, char *file, int exit_code, int fd_1, int fd_2)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, file ? file : "");
	close_fd(fd_1, fd_2);
	exit(exit_code);
}
