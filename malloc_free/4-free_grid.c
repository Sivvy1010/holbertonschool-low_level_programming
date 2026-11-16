#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @height: number of rows
 * @grid: the address of grid
 */

void free_grid(int **grid, int height)
{
	int count;

	count = 0;

	while (count < height)
	{
		free(grid[count]);
		count++;
	}
	free(grid);
}
