#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: file to read and print.
 * @letters: number of letters.
 *
 * Return: actual number of letters it could read and print, 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num;
	char *ch;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);

	if (!ch)
		return (0);
	num = read(fd, ch, letters);
	if (!num)
		return (0);
	num = write(STDOUT_FILENO, ch, num);
	close(fd);
	free(ch);
	return (num);
}
