#include "holberton.h"

/**
 * *_strchr - finding a char in an array
 * @s: source
 * @c: the char we are looking for
 * Return: the new value of s.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (0);
}
