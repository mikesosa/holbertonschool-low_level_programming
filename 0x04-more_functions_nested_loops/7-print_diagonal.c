#include "holberton.h"

/**
 * print_diagonal - printing n times
 * @n: the char to print
 * Return: no return
 */
void print_diagonal(int n)
{
	int space;
	int nwln;

	for (space = 0 ; space < n ; space++)
	{
		for (nwln = 0; nwln < space; nwln++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
