#ifndef FILE_IO_HEADER
#define FILE_IO_HEADER

#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

#define BUFSIZE 1024

void close_fd(int fd1, int fd2);
void error_msg(char *msg, char *file, int exit_code, int fd1, int fd2);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
