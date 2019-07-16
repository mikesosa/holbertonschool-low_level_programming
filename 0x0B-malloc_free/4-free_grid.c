#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer of two dimensional array
 * @grid: Source widht of matrix
 * @height: Source height of matrix
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
