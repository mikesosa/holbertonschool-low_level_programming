#include "holberton.h"

/**
 * print_square - printing a square with #.
 * @size: how big the square will be
 * Return: no return.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 1; x <= size; x++)
		{
			int y;

			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
