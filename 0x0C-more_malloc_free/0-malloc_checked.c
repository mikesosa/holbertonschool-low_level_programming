#include "holberton.h"

/**
 * *malloc_checked - simply requires space inthe heap
 * @b: the ammount of memory we need
 * Return: p, a pointer to the new space of memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
