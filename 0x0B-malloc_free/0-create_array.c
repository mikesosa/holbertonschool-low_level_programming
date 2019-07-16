#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - pasing values to other array
 * @size: Size of the array
 * @c: Variable to initialize the array
 * Return: arr, the array they need
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
