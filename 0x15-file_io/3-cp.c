#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define NO_READ "Error: Can't read from file %s\n"
#define NO_WRITE "Error: Can't write to %s\n"
#define NO_CLOSE "Error: Can't close fd %d\n"
#define PERMIT (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - entry point
 * @ac: arg c
 * @av: arg v
 * Return: exit_success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t b;
	char buffer[BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, NO_READ, av[1]), exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | PERMIT);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, NO_WRITE, av[2]), exit(99);
	}
	while ((b = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, b) != b)
			dprintf(STDERR_FILENO, NO_WRITE, av[2]), exit(99);
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, NO_READ, av[1]), exit(98);
	}
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
	{
		dprintf(STDERR_FILENO, NO_CLOSE, fd_from), exit(100);
	}
	if (fd_to)
	{
		dprintf(STDERR_FILENO, NO_CLOSE, fd_to), exit(100);
	}
	return (EXIT_SUCCESS);

}
