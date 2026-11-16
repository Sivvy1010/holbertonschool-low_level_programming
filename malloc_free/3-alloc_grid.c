#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: returns grid on success and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int count;
	int column;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < height)
	{
		grid[count] = malloc(width * sizeof(int));
		if (grid[count] == NULL)
		{
			i = 0;
			while (i < count)
			{
				free(grid[i]);
				i++;
			}
			free(grid);
			return (NULL);
		}
		column = 0;
		while (column < width)
		{
			grid[count][column] = 0;
			column++;
		}
		count++;
	}
	return (grid);
}
