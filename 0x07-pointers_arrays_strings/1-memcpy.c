#include "holberton.h"

/**
 * *_memcpy - filling n times the memory with other array
 * @dest: variable of destiny
 * @src: where to take bits from
 * @n: number of chars to pass
 * Return: the new value of s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
