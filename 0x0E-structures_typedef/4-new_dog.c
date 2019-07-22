#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initializes a new dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: @n_doggie, pointer to the new dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_doggie;

	n_doggie = malloc(sizeof(dog_t));
	if (n_doggie == NULL)
		return (NULL);
	n_doggie->name = name;
	n_doggie->age = age;
	n_doggie->owner = owner;
	if (n_doggie->name == NULL || n_doggie->owner == NULL)
	{
		free(n_doggie->name);
		free(n_doggie->owner);
		free(n_doggie);
	}	
	return (n_doggie);
}
