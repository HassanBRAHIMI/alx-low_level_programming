/**
 * read_textfile - reads a text and prints it to stdout
 * @filename: file name
 * @letters: the number of letters it should print
 *
 * Return: the actual number of letters it could read and print
 */

#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, k;
	int j = 0;
	char buff[1024];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	i = read(fd, buff, letters);
	if (i < 0)
		return (0);
	while (j < i)
	{
		k = write(1, &buff[j], 1);
		if (k < 0)
			return (0);
		j++;
	}
	return (i);
}
