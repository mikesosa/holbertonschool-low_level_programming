#include "holberton.h"

/**
 * print_number - printing numbers with putchar.
 * @n: number to print
 * Return: no return.
 */
void print_number(int n)
{

	unsigned int x = n;

	if (n < 0)
	{
		x = ~x + 1;
		_putchar('-');
	}

	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + '0');
}
