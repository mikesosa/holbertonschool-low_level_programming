#include "holberton.h"
#include <stdio.h>

/**
 * _check_div - printing numbers with putchar.
 * @x: number to print
 * Return: no return.
 */
int _check_div(int x)
{
	int div;

	div = 1;
	while (div <= x)
	{
		div = div * 10;
	}
	return (div);
}
/**
 * _check_div_neg - printing numbers with putchar.
 * @x: number to print
 * Return: no return.
 */
int _check_div_neg(int x)
{
	int div;

	div = 1;
	while (div <= x)
	{
		div = div * 10;
	}
	_putchar('-');
	return (div);
}
/**
 * _check_mod - printing numbers with putchar.
 * @x: number to print
 * @div: number to print
 * Return: no return.
 */
int _check_mod(int x, int div)
{
	do {
		div = div / 10;
		_putchar(48 + (x / div));
		x = x % div;
	} while (x);
	return (x);
}
/**
 * print_number - printing numbers with putchar.
 * @n: number to print
 * Return: no return.
 */
void print_number(int n)
{
	if (n > 9)
	{
		int x = n;
		int div = _check_div(x);

		_check_mod(x, div);
	} else if (n < 0)
	{
		int x = n * (-1);
		int div = _check_div_neg(x);

		_check_mod(x, div);
	} else
	{
		_putchar(48 + n);
	}

}
