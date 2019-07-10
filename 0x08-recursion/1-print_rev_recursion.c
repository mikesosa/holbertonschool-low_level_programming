#include "holberton.h"

/**
 * _print_rev_recursion - printing in reverse with _putchar
 * @s: string to print
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
