#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: the 2 dimension array
 * @height: the height of array
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
