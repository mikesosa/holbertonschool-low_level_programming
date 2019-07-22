#include <stdio.h>
#include "dog.h"

/**
 * init_dog - simple function to initialize a structure of dog
 * @d: structure of dog
 * @name: name of the doggie
 * @age: age of the doggie
 * @owner: owners name
 * Return: p, a pointer to the new space of memory
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
