#include "holberton.h"

/**
 * puts_half - function to reverse strings.
 * @str: the string
 * Return: void.
 */
void puts_half(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{

		x /= 2;
		for (; str[x] != '\0' ; x++)
		{
			_putchar(str[x]);
		}

	} else
	{
		if (x <= 2)
		{
			x = x - 1;
			for (; str[x] != '\0' ; x++)
			{
				_putchar(str[x]);
			}
		} else
		{
			x = (x - 1) / 2;
			for (; str[x] != '\0' ; x++)
			{
				_putchar(str[x + 1]);
			}
		}
	}

	_putchar('\n');

}
