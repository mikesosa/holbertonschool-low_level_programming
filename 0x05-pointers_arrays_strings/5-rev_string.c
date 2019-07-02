#include "holberton.h"

/**
 * rev_string - function to reverse strings.
 * @s: the string
 * Return: void.
 */
void rev_string(char *s)
{

	int x, y;
	int ld, fd;

	x = 0;
	fd = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	char temp[x];

	for (ld = x - 1; ld >= 0; ld--)
	{
		temp[fd] = s[ld];
		fd++;
	}

	for (y = 0; y < x; y++)
	{
		s[y] = temp[y];
	}
}
