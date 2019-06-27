#include "holberton.h"

/**
 * more_numbers - printing char from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int j, k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14 ; k++)
		{
			if (k > 9)
			{
				_putchar(48 + (k / 10));
			}
			_putchar(48 + (k % 10));

		}
		_putchar('\n');
	}
}
