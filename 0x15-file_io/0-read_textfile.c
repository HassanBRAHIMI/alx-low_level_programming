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
	ssize_t opened, readed, written;
	char *buff;

	if (!filename || letters <= 0)
		return (0);
	opened = open(filename, O_RDONLY);
	if (opened == -1)
		return (0);
	buff = (char *)malloc(letters * sizeof(char));
	if (!buff)
		return (0);
	readed = read(opened, buff, letters);
	written = write(STDOUT_FILENO, buff, readed);
	if (written == -1 ||readed == -1 || written != readed)
	{
		free(buff);
		close(opened);
		return (0);
	}

	free(buff);
	close(opened);
	return (written);
}
