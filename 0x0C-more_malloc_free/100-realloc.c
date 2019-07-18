#include "holberton.h"
/**
* *_realloc - return an arrays of integers
* @ptr: min number
* @old_size: max number
* @new_size: max number
* Return: pointer, the new pointer;
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	int i = 0;
	char *dog;

	dog = ptr;
	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		while (old_size)
		{
			pointer[i] = dog[i];
			i++;
			old_size--;
		}
	} else
	{
		i = 0;
		while (new_size)
		{
			pointer[i] = dog[i];
			new_size--;
			i++;
		}
	}
	free(ptr);
	return (pointer);
}
