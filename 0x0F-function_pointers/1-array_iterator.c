#include "function_pointers.h"

/**
 * array_iterator - Perfoms a function for each element of the array
 * @array: the array we work with
 * @size: size of the array
 * @action: function we have to perform
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (size && array && action)
	{
		while (size)
		{
			action(array[i]);
			i++;
			size--;
		}
	}
}
