#include "holberton.h"

/**
 * *_strcat - appending the value of one variable to another one.
 * @dest: variable of detiny
 * @src: variable soruce
 * Return: the destiny.
 */
char *_strcat(char *dest, char *src)
{
	int count, b;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[count] = src[b];
		count++;
		b++;
	}

	return (dest);
}
