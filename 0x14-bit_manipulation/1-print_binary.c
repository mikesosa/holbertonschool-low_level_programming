#include "holberton.h"
/**
* print_binary - prints decimal to binary
* @n: number to convert
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int i, count = 0;

	if (n == 0)
		_putchar ('0');
	while (tmp > 0)
	{
		tmp = tmp >> 1;
		count++;
	}
	for (count -= 1; count >= 0; count--)
	{
		i = n >> count;
		if (i & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
