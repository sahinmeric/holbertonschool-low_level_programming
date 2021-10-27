#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid -function that returns a pointer to a 2 dim array of integers
 *
 *@width: width of two dimentional array
 *@height: height of two dimentional array
 * Return: two dim array. On error return NULL
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
		free(grid);
	}
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);
	}

	return (grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
