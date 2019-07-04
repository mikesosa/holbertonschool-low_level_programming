#include "holberton.h"

/**
 * *_strcmp - comparing two values
 * @s1: variable of detiny
 * @s2: variable soruce
 * Return: the destiny.
 */
int _strcmp(char *s1, char *s2)
{
	int cnt;

	for (cnt = 0 ; s1[cnt] == s2[cnt]; cnt++)
	{
		if (s1[cnt] == '\0')
		{
			return (0);
		}
	}

	return (s1[cnt] - s2[cnt]);
}
