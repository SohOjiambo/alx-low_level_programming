#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: the width
 * @height: the height
 *
 * Return: a pointer to the 2D array on success, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
		free(grid[x]);
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
