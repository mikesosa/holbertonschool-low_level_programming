#include "holberton.h"

/**
 * puts2 - function to reverse strings.
 * @str: the string
 * Return: void.
 */
void puts2(char *str)
{

	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');

}
