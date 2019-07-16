#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - pasing values to other array
 * @size: Size of the array
 * @c: Variable to initialize the array
 * Return: arr, the array they need
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);

	char *arr = malloc(size * sizeof(char));

	if (arr == 0)
		return (0);

	int i = 0;
	int s = size;

	while (i < s)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
