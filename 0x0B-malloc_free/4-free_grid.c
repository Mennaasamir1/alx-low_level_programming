#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional array
 * @grid: memory grid
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}

	free(grid);
}
