#include "main.h"
#include <string.h>
/**
 * _len - calculates len
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
 * append_text_to_file - appends text to file
 * @filename: filename
 * @text_content: content of text (str)
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t letters = 0, length = _len(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
