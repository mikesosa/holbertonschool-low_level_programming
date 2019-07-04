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
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
