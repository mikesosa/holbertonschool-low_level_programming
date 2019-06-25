#include "holberton.h"

/**
 * _abs - prints absulote value of number
 * @x: is the int being checked
 * Return: (x)
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
	}
	return (x);
}
