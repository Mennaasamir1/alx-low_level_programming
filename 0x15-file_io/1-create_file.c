#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: file
 * @text_content: text
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, length = strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (length)
	{
		b = write(fd, text_content, length);
	}
	close(fd);
	return (b == length ? 1 : -1);
}
