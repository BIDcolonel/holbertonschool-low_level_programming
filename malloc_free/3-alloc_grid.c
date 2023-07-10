#include "main.h"

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2D array (grid) or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int line_counter, column_counter;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (line_counter = 0; line_counter < height; line_counter++)
	{
		grid[line_counter] = malloc(width * sizeof(int));
		if (grid[line_counter] == NULL)
		{
			for (column_counter = 0; column_counter < line_counter;
					column_counter++)
				free(grid[column_counter]);
			free(grid);
			return (NULL);
		}

		for (column_counter = 0; column_counter < width;
				column_counter++)
			grid[line_counter][column_counter] = 0;
	}

	return (grid);
}
