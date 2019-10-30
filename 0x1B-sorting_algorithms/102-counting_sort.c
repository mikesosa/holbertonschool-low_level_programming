#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

/**
 * filling_array - filling out the old array in a sorted way
 * @array: old array
 * @new_array: new array
 * @k: size of the array
 */
void filling_array(int *array, int *new_array, int k)
{
	int last_n = 0, s_position = 0, j;

	for (j = 0; j <= k; j++)
	{
		if (new_array[j] > last_n)
		{
			array[s_position] = j;
			last_n = new_array[j];
			s_position++;
		}
	}
	free(new_array);
}
/**
 * counting_sort - sorts an array based on number of coincidences
 * @array: array given by main
 * @size: size of array
 *
 */
void counting_sort(int *array, size_t size)
{
	int i = 0, j = 0, lenght = size, k = 0;
	int *new_array;
	size_t x;

	if (size < 2 || !(*array) || !array)
		return;
	while (lenght)
	{
		if (array[i] > k)
			k = array[i];
		i++;
		lenght--;
	}

	new_array = malloc(sizeof(int) * k);
	if (!new_array)
		return;
	memset(new_array, 0, k);
	for (j = 0; j <= k; j++)
	{
		for (x = 0; x < size; x++)
		{
			if (array[x] == j)
				new_array[j] += 1;
		}
	}
	for (j = 0; j <= k; j++)
	{
		new_array[j] += new_array[j - 1];
		printf("%d", new_array[j]);
		if (j < k)
			printf(", ");
		else
			printf("\n");
	}

	filling_array(array, new_array, k);
}
