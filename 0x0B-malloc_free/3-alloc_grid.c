#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers.
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			free(p);
			for (k = 0; k <= height; k++)
				free(p[k]);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			p[i][k] = 0;
		}
	}

	return (p);
}
