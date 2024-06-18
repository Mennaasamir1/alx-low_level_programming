#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies  memory area
 * @dest: pointer to the destination array where memory is copied
 * @src: pointer to the source array from which data will be copied
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}

	return (dest);

}
