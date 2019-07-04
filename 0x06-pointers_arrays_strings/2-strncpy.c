#include "holberton.h"

/**
 * *_strncpy - copies the value from src to dest
 * @dest: variable of detiny
 * @src: variable soruce
 * @n: number of chars to pass
 * Return: the destiny.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count, b;

	count = 0;

	b = 0;
	while (b < n)
	{
		dest[count] = src[b];
		count++;
		b++;
	}

	return (dest);
}
