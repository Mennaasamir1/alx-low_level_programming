#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of an array
 * @c: characters to fill an array
 * Return: pointer to an array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		s[j] = c;
	}

	return (s);
}
