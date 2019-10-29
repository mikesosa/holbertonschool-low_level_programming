#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* selection_sort - sorte's an array based on selection algthm
* @array: the array we are iterating through
* @size: the size of the array
*
* Return: none it is void
*/

void selection_sort(int *array, size_t size)
{
	int lenght = size - 1;
	int s_position = 0;
	int f_position = 0;
	int tmp = 0;
	unsigned int i = 0;
	int flag = 0;
	int minimun = 0;

	if (size < 2)
		return;
	while (lenght)
	{
		i = s_position;
		minimun = array[s_position];

		while (i < size)
		{
			if (array[i] < minimun)
			{
				minimun = array[i];
				f_position = i;
				flag = 1;
			}
			++i;
		}
		if (flag)
		{
			tmp = array[s_position];
			array[s_position] = minimun;
			array[f_position] = tmp;
			print_array(array, size);
			flag = 0;
		}
		lenght--;
		s_position++;
	}
}
