#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* bubble_sort - implements the bubble sort algo for an array of ints
* @array: the array we are iterating through
* @size: the size of the array
*
* Return: none it is void
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0;
	int tmp = 0;
	bool sorted = true;

	if (size < 2)
		return;
	while (sorted)
	{
		sorted = false;
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				sorted = true;
			}
			i++;
		}
	}
}
