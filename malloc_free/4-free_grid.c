#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int counter;

	if (grid == NULL || height <= 0)
		return;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}

	free(grid);
}
