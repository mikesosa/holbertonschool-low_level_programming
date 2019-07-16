#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - copies an string to an array
 * @str: Source string
 * Return: @dest which is the new memory location.
 */
char *_strdup(char *str)
{
	char *dest;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = str[i];
	return (dest);
}
