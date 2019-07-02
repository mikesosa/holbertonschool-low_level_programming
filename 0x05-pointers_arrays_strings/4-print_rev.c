#include "holberton.h"

/**
 * print_rev - function to print strings in reverse.
 * @s: the string
 * Return: void.
 */
void print_rev(char *s)
{

	int x;
	int ld;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (ld = x; ld > 0; ld--)
	{
		_putchar(s[ld - 1]);
	}

	_putchar('\n');
}
