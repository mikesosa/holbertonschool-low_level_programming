#include "holberton.h"
#include <stdio.h>

/**
 * function - prints the alphabet 10 times
 * @x: THe number
 * No return
 */

void function(int x)
{
	if ((x / 10) > 0)
		function(x / 10);
	_putchar((x % 10) + '0');
}

/**
 * spaces - prints the alphabet 10 times
 * @x: THe number
 * No return
 */
void spaces(int x)
{

	_putchar(',');
	if (x >= 100)
	{
		_putchar(' ');
	} else if (x >= 10 && x <= 99)
	{
		_putchar(' ');
		_putchar(' ');
	} else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}

}

/**
 * printing - prints the alphabet 10 times
 * @y: THe number
 * @n: THe number
 * No return
 */
void printing(int y, int n)
{
	int k = 1;
	int x;

	for (x = 0; x <= n; x++)
	{
		if (y == 0 || x == 0)
		{
			_putchar('0');
		} else
		{
			int z = k * y;

			if (z <= 9)
			{
				_putchar(z + '0');
			} else
			{
				function(z);
			}
			k++;
		}

		if (x < n)
		{
			int z = k * y;

			spaces(z);
		}
	}

}

/**
 * print_times_table - prints the alphabet 10 times
 * @n: THe number
 * No return
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int y;

		for (y = 0; y <= n; y++)
		{

			printing(y, n);

			_putchar('\n');

		}
	}
}
