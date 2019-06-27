#include "holberton.h"
#include <stdio.h>
/**
 * print_number - printing numbers with putchar.
 * @n: number to print
 * Return: no return.
 */
void print_number(int n)
{

	if (n != 0)
	{
		if (n < 0)
		{
			n = n * -1;
			int div;

			div = 1;
			while(div <= n)
			{
				div = div * 10;
			}
			// for (div = 1; div <= n; div *= 10)
			// { ; }
			_putchar('-');

			do {
				div = div / 10;
				_putchar(48 + (n / div));
				n = n % div;
			} while (n);


		} else
		{
			int div;

			div = 1;
			while(div <= n)
			{
				div = div * 10;
			}
			// for (div = 1; div <= n; div *= 10)
			// { ; }
			do {
				div = div / 10;
				_putchar(48 + (n / div));
				n = n % div;
			} while (n);
		}
	} else
	{
		_putchar(48 + n);
	}
}
