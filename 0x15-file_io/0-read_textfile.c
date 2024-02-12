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
	ssize_t o, r, w;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);
	o = open(filename, O_RDONLY);
	if (o < 0)
	{
		free(buff);
		return (0);
	}
	r = read(o, buff, letters);
	if (r < 0)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	if (w < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
