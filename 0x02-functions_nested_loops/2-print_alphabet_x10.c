#include "holberton.h"

/**
 * print_alphabet_x10- prints the alphabet 10 times
 *
 * No return
 */
void print_alphabet_x10(void)
{
	int a, times;

	for (times = 1; times <= 10; times++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}

