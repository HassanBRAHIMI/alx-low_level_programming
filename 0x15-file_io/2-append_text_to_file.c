/**
 * append_text_to_file - append text
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on succes -1 on failure
 */
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (!filename)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	len = 0;
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close   (o);
	return (1);
}
