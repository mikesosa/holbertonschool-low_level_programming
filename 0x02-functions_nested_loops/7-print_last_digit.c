#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit of number
 * @x: is the int being checked
 * Return: (n) wich is the last digit
 */
int print_last_digit(int x)
{
	int n = x % 10;

	if (n < 0)
	{
		n = n * (-1);
	}
	_putchar (n + '0');
	return (n);
}
