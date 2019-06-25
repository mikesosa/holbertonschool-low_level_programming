#include "holberton.h"

/**
 * print_sign - prints negative and positive numbers
 * @n: is the int being checked
 * Return: (1) if n is positive (-1) if n is negative and (0) if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	} else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}

	_putchar ('0');
	return (0);
}

