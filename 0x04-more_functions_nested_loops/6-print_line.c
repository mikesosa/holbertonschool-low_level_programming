#include "holberton.h"

/**
 * print_line - printing n times _
 * @n: the char to print
 * Return: no return
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
