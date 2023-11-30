#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	len = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = calloc(sizeof(int),  len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);

}
