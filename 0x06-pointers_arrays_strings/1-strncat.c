#include "holberton.h"

/**
 * *_strncat - appends the value of one var to another but depending on n
 * @dest: variable of detiny
 * @src: variable soruce
 * @n: number of chars to pass
 * Return: the destiny.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, b;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}

	b = 0;
	while (b < n)
	{
		dest[count] = src[b];
		count++;
		b++;
	}

	return (dest);
}
