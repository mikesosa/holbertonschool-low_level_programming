#include "holberton.h"

/**
 * *_calloc - recreating alloc fuction
 * @nmemb: the ammount of memory to store
 * @size: the ammount of memory to store
 * Return: p, a pointer to the new space of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
