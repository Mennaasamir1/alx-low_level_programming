#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 * Return: always 0
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
