/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: null terminated string
 *
 * Return: 1 on succes -1 on failure
 */
#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int o, w, content_len;

	if (!filename)
		return (-1);
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (o == -1)
		return (-1);
	content_len = 0;
	if (text_content)
	{
		while (text_content[content_len])
		content_len++;
	}
	w = write(o, text_content, content_len);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
