#include "holberton.h"

/**
 * _isalpha - identifies if the char is alphabetic
 * @c: is the char being checked
 * Return: (1) if c is alpha (0) if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	/* descripro */
	return (0);
}

