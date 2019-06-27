#include "holberton.h"

/**
 * print_number - printing numbers with putchar.
 * @n: number to print
 * Return: no return.
 */
void print_number(int n)
{

	if (n > 9 || n < 0)
	{
		if (n < 0)
		{
			n = n * -1;

			int div = 1;

			while (div <= n)
			{
				div *= 10;
			}
			_putchar('-');

			do {
				div /= 10;
				_putchar(48 + (n / div));
				n %= div;
			} while (n);
		} else
		{
			int div = 1;

			while (div <= n)
			{
				div *= 10;
			}

			do {
				div /= 10;
				_putchar(48 + (n / div));
					n %= div;
			} while (n);
		}
	} else
	{
		_putchar(48 + n);
	}
}
