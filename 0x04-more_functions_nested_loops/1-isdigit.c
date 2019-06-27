#include "holberton.h"

/**
 * _isdigit - cheks if it's a digit from 0 to 9
 * @c: is the digit to check
 * Return: (1) if positive, (0) if negative.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
