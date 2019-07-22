#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *_strcreator - creates and duplicates the new string in the struct
 * @str: char to the string
 * Return: @ptr, the new alocatec string
 */
char *_strcreator(char *str)
{
	char *ptr;
	unsigned int length, n;

	length = 0;
	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (n = 0; n <= length; n++)
		ptr[n] = str[n];
	return (ptr);
}

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
	n_doggie->name = _strcreator(name);
	n_doggie->age = age;
	n_doggie->owner = _strcreator(owner);
	if (n_doggie->name == NULL || n_doggie->owner == NULL)
	{
		free(n_doggie->name);
		free(n_doggie->owner);
		free(n_doggie);
	}
	return (n_doggie);
}
