#include "holberton.h"

/**
 * rev_string - function to reverse strings.
 * @s: the string
 * Return: void.
 */
void rev_string(char *s)
{

	int x;
	int ld, fd, temp;

	x = 0;
	fd = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	fd = 0;
	ld = x - 1;

	while (fd <= ld)
	{
		temp = s[ld];
		s[ld] = s[fd];
		s[fd] = temp;
		fd++;
		ld--;
	}

}
