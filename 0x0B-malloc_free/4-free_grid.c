#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid -  frees a 2 dimensional grid
 *
 *@grid: that will be freed
 *@height: height of grid
 * Return: 0 success
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
