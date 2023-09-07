#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -frees 2-dimensional array
 * @grid: 2-dimensional grid
 * @height: height of dimension of grid
 * Description: frees memomry of grid
 * Return: nohting
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
