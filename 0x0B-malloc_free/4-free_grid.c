#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 *
 *@grid: 2D array will be freed
 *
 * @height: The height of 2d array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
