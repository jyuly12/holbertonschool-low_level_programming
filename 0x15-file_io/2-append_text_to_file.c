#include "holberton.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: file to create.
 * @text_content: content to file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fn, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR, 0664);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		fn = write(fd, text_content, i);
	}
	if (fn == -1)
		return (-1);
	close(fd);
	return (1);
}
