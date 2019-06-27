#include "holberton.h"

/**
 * print_most_numbers - print number from 0 to 9 except 2 and 4
 * Return: (j) the resutl
 */
void print_most_numbers(void)
{
	int j;

	for (j = '0'; j <= '9' ; j++)
	{
		if (j != '2' && j != '4')
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
