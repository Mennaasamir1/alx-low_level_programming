#include "main.h"
/**
 * _length - returns len
 * @str: string
 * Return: len
 */
int _length(char *str)
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
 * append_text_to_file - appends text
 * @filename: file
 * @text_content: text
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t b = 0, len = _length(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
	{
		b = write(fd, text_content, len);
	}
	close(fd);
	return (b == len ? 1 : -1);
}
