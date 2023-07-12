#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: grid
 * @height: height
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}
	free(grid);
}
