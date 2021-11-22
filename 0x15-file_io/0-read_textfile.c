#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"


/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: name of file to be read
 *@letters: number of letters to print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_size = 0, write_size = 0;
	int fd = 0;
	char *buffer = malloc(letters);

	if (!filename)
		return (0);

	if (!buffer)
		return (0);
	fd = open(filename, O_RDWR, 0600);

	if (fd == -1)
		return (0);

	read_size = read(fd, buffer, letters);

	if (read_size == -1)
		return (0);

	write_size = write(STDOUT_FILENO, buffer, read_size);

	if (write_size == -1)
		return (0);

	free(buffer);
	close(fd);
	return (letters);
}
