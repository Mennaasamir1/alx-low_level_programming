#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: pointer to array
 * @height: rows
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
