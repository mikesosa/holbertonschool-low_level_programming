#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory for functions
 * @d: pointer to a struct
 * Return: void.
 */
void free_dog(dog_t *d)
{
	free(d);
}
