#include "holberton.h"

/**
 * check - chek the root
 * @n: number to check
 * @y: number to return
 * Return: number.
 */
int check(int n, float y)
{
	if (y == n / y)
		return (y);
	if (y > (n / y))
		return (-1);
	return (check(n, y + 1));
}

/**
* _sqrt_recursion - print sqr root
* @n: number to pass
* Return: the number.
*/
int _sqrt_recursion(int n)
{
	float y = 1;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (check(n, y));
}
