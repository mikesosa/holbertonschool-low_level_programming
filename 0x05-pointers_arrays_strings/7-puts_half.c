#include "holberton.h"

/**
 * puts_half - function to reverse strings.
 * @str: the string
 * Return: void.
 */
void puts_half(char *str)
{
	int x, even, odd;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (even = x / 2; str[even] != 0; even++)
		{
			_putchar(str[even]);
		}
	} else
	{
		for (odd = (x + 1) / 2 ; str[odd] != '\0'; odd++)
		{
			_putchar(str[odd]);
		}
	}

	_putchar('\n');
}
