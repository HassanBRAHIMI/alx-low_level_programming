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
	ssize_t opened, written, readed;

	if (!filename)
		return (0);
	char *buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);
	opened = open(filename, O_RDONLY);
	readed = read(opened, buff, letters);
	written = write(STDOUT_FILENO, buff, letters);
	if (opened < 0 || readed < 0 || written < 0 || written != readed)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close (opened);
	return (written);
}
