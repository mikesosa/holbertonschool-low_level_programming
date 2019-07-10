#include "holberton.h"

/**
 * factorial - factorial of a number
 * @n: number to factorial
 * Return: void.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
