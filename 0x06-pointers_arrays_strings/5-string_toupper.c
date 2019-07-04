#include "holberton.h"

/**
 * string_toupper - captitalizing letters
 * @s: string to work
 * Return: the result.
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
