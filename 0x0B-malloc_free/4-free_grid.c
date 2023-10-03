#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A prototupe function that frees a 2dim grid
 * @grid: double pointer for grid
 * @height: the length of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
