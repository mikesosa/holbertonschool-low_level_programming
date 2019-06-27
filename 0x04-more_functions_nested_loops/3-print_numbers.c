#include "holberton.h"

/**
 * print_numbers - print number from 0 to 9
 * Return: (j) the resutl
 */
void print_numbers(void)
{
	int j;

	for (j = '0'; j <= '9' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
