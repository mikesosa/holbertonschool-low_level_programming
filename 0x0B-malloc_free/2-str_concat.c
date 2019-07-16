#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings in a new memory location space
 * @s1: Source string 1
 * @s2: Source string 2
 * Return: @dest which is the new contatenated string memory location.
 */
char *str_concat(char *s1, char *s2)
{
	int ls1 = 0;
	int ls2 = 0;
	int i = 0;
	int j = 0;
	char *dest;

	if (s1 == 0 || s2 == 0)
		return (0);

	while (s1[ls1] != 0)
		ls1++;

	while (s2[ls2] != 0)
		ls2++;

	dest = malloc((ls1 * sizeof(char)) + ((ls2 + 1) * sizeof(char)));

	while (s1[i] != 0)
	{
		dest[i] = s1[i];
		i++;
	}

	while (s2[j] != 0)
	{
		dest[i] = s2[j];
		j++;
		i++;
	}
	dest[i] = s2[j];

	return (dest);
}
