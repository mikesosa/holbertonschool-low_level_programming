#include "holberton.h"

/**
 * _puts - function to print strings.
 * @str: the string
 * Return: it returns the length of the string.
 */
void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
