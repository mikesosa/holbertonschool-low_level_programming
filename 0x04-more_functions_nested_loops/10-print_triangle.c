#include "holberton.h"

/**
 * print_triangle - printing a square with #.
 * @size: how big the square will be
 * Return: no return.
 */
void print_triangle(int size)
{
	if (size != 0)
	{
		for (int i = 1; i <= size; i++)
		{
			for (int e = size; e > i; e--)
			{
				_putchar(' ');
			}
			for (int n = 1; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}