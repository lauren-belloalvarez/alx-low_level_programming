#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2D grid
 *
 * @grid: grid address
 * @height: grid height
 *
 * Return: 0 if successfull
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
