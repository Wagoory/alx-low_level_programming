#include "main.h"


/**
 * read_textfile - reads files.
 * @filename: name.
 * @letters: number of letters.
 *
 * Return: actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t x, y;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	x = read(fd, buffer, letters);
	close(fd);
	if (x == -1)
	{
		free(buffer);
		return (0);
	}
	y = write(STDOUT_FILENO, buffer, x);
	free(buffer);
	if (x != y)
		return (0);
	return (y);
}
