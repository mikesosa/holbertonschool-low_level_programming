#include "holberton.h"

/**
 * check - checking is prime or not
 * @n: number to check
 * @x: aumenting variable
 * Return: 0 if not 1 if yes.
 */
int check(int n, int x)
{
	if (n == x)
		return (1);

	if (n % x == 0)
		return (0);

	return (check(n, x + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 * Return: 0 if not 1 if yes.
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n < 2)
		return (0);

	return (check(n, x));
}
