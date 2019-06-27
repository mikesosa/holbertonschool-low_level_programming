#include "holberton.h"

/**
 * print_diagonal - printing n times _
 * @n: the char to print
 * Return: no return
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('\\');
			_putchar('\n');

			if (x != n)
			{
				for (int j = 1; j <= x; j++)
				{
					_putchar(32);
				}
			}
		}
	}

}
