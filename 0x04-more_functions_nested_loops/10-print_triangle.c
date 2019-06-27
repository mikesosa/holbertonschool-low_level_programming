#include "holberton.h"

/**
 * print_triangle - printing a square with #.
 * @size: how big the square will be
 * Return: no return.
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int e;
		int n;

		for (e = size; e > i; e--)
		{
			_putchar(' ');
		}
		for (n = 1; n <= i; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
