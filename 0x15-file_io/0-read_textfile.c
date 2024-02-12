/*
 * File: 0-read_textfile.c
 * Auth: Dr Marcus.
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_write;
	ssize_t fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	bytes_read = read(fd, buffer, letters);
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_read == -1 ||
			bytes_read != bytes_write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_write);
}
