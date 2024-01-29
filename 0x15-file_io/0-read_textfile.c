#include "main.h"
/**
 * read_textfile - reads and writes
 * @filename: file
 * @letters: letters to be written
 *
 * Return: bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bts;
	char buffer[BUF_SIZE * 8]; /* allocate memory for the buffer */

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	bts = read(fd, &buffer[0], letters);
	bts = write(STDOUT_FILENO, &buffer[0], bts);

	close(fd);
	return (bts);


}
