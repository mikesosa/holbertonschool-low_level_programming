#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer of two dimensional array
 * @width: Source widht of matrix
 * @height: Source height of matrix
 * Return: @dest which is the pointer that points to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **dest;

	if (width <= 0 || height <= 0)
		return (0);
	dest = malloc(height * sizeof(int *));

	if (dest == NULL)
		return (0);
	while (i < height)
	{
		dest[i] = malloc(width * sizeof(int));
		if (dest[i] == NULL)
			return (0);
		i++;
	}

	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			dest[i][j] = 0;
			j++;
		}
		i++;
	}

	return (dest);
}
