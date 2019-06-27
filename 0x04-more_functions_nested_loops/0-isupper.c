#include "holberton.h"

/**
 * _isupper - checks if c is an Uppercase letter
 * @c: is the integer to check
 * Return: (1) if postivie, (0) if negative.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
