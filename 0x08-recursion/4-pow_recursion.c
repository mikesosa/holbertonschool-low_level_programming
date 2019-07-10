#include "holberton.h"

/**
 * factorial - factorial of a number
 * @x: number to factorial
 * @y: number to factorial
 * Return: void.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
