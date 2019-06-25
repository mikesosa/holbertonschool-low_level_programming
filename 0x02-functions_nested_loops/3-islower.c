#include "holberton.h"

/**
 * _islower - identifies lowercases
 * @c: is the char being checked
 * Return: (1) if c is lowercase (0) if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	/* descripro */
	return (0);
}

