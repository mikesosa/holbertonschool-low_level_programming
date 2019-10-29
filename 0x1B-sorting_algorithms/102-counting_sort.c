#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

/**
 * counting_sort - sorts an array based on number of coincidences
 * @array: array given by main
 * @size: size of array
 *
 */
void counting_sort(int *array, size_t size)
{
	int i = 0, j = 0, lenght = size, r = 0, k = 0, coincidences, s_position = 0;
	int *new_array;
	size_t size2, x;

	while (lenght)
	{
		if (array[i] > k)
			k = array[i];
		i++;
		lenght--;
	}
	size2 = k;
	new_array = malloc(sizeof(int) * k);
	memset(new_array, 0, size2);
	for (j = 0; j <= k; j++)
	{
		for (x = 0; x < size; x++)
		{
			if (array[x] == j)
				new_array[j] += 1;
		} }
	for (j = 0; j <= k; j++)
	{
		r += new_array[j];
		printf("%d", r);
		if (j < k)
			printf(", ");
		else
			printf("\n");
		if (new_array[j] != 0)
		{
			i = 0;
			coincidences = new_array[j];
			while (i < coincidences)
			{
				array[s_position] = j;
				s_position++;
				i++;
			} } }
}
