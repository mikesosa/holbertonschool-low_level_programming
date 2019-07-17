#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - returns a pointer of two dimensional array
 * @ac: Source widht of matrix
 * @av: Source height of matrix
 * Return: void.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int total = 0;
	char *dest;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			total++;
	dest = (char *) malloc(sizeof(char) * (total + ac + 1));
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			dest[k] = av[i][j];
		dest[k] = '\n';
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
