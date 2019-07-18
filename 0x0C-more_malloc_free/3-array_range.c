#include "holberton.h"
/**
* *array_range - return an arrays of integers
* @min: min number
* @max: max number
* Return: pointer, the new pointer;
*/
int *array_range(int min, int max)
{
	int *pointer;
	int s_arr = 0;
	int i = 0;

	if (min > max)
		return (NULL);
	s_arr = max - min + 1;
	pointer = malloc(s_arr * sizeof(int));
	if (pointer == NULL)
		return (NULL);

	while (0 <= s_arr)
	{
		pointer[i] = min;
		s_arr--;
		min++;
		i++;
	}
	return (pointer);
}
