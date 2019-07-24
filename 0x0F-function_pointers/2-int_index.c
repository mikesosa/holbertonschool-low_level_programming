#include "function_pointers.h"

/**
 * int_index - returns an index when comparision is true
 * @array: the array we work with
 * @size: size of the array
 * @cmp: comparision we have to perform
 * Return: @i if cmp is true, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	while (size)
	{
		if (cmp(array[i]))
			return (i);
		size--;
		i++;
	}
	return (-1);
}
