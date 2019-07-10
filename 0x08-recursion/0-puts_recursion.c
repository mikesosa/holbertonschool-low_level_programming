#include "holberton.h"

/**
 * *_memcpy - filling n times the memory with other array
 * @dest: variable of destiny
 * @src: where to take bits from
 * @n: number of chars to pass
 * Return: the new value of s.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
