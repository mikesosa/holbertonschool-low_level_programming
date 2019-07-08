#include "holberton.h"

/**
 * *_memset - filling n times the memory with charracter
 * @s: variable of detiny
 * @b: char to put
 * @n: number of chars to pass
 * Return: the new value of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
