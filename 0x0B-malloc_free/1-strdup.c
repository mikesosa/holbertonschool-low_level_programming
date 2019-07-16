#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies an string to an array
 * @str: Source string
 * Return: @dest which is the new memory location.
 */
char *_strdup(char *str)
{
	int len = 0;
	int i = 0;

	if (str == 0)
		return (0);

	while (str[len] != 0)
		len++;

	char *dest = malloc(len * sizeof(char));

	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}

	return (dest);
}
