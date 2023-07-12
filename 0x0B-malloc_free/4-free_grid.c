#include  <stdlib.h>
#include "main.h"
/**
 * free_grid - A function that frees the previous created grid
 * @grid: the 2D array
 * @height: the height of array
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
