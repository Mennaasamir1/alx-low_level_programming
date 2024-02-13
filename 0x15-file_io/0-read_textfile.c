#include "main.h"
/**
 * read_textfile - reads and writes to POIX
 * @filename: filename
 * @letters: letters of file
 *
 * Return: num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_of_letters;
	int fd;
	char buffer[BUF_SIZE * 7];

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	num_of_letters = read(fd, &buffer[0], letters);
	num_of_letters = write(STDOUT_FILENO, &buffer[0], num_of_letters);

	close(fd);

	return (num_of_letters);
}
