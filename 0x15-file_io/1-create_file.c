
#include "main.h"
#include <string.h>
/**
 * _len - calculates length
 * @str: string
 * Return: len
 */
int _len(char *str)
{
	int len = 0;

	if (!str)
		return (0);
	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t letters = 0, length = _len(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (length)
	{
		letters = write(fd, text_content, length);
	}

	close(fd);

	return (letters == length ? 1 : -1);
}
