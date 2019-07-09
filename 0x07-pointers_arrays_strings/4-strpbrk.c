#include "holberton.h"

/**
 * *_strpbrk - finding a char in an array
 * @s: source
 * @accept: the only chars accepted
 * Return: the new value of s.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
