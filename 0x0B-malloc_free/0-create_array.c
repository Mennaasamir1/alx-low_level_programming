#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates an array of chars
 * @size: size of an array
 * @c: specific char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		ptr = (char *)malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}

		printf("%c", ptr[i]);
		return (ptr);
	}
}
