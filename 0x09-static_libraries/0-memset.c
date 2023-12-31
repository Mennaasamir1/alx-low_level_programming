#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area s
 * @b: the constant byte value to fill memory with
 * @n: the number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
