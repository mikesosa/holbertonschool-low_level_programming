#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: (0) Success
 *
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
