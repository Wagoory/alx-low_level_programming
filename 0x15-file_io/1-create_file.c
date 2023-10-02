#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: to write.
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int numbers;
	int stat;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numbers = 0; text_content[numbers]; numbers++)
		;

	stat = write(fd, text_content, numbers);

	if (stat == -1)
		return (-1);

	close(fd);

	return (1);
}
