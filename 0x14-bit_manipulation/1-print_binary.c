#include "holberton.h"
/**
 * x_to_the_n - Fucntion that does to the power of
 * @x: the number
 * @n: the eleveado
 * Return:@number the result
 */
int x_to_the_n(int x, int n)
{
	int i;
	int number = 1;

	for (i = 0; i < n; ++i)
		number *= x;
	return (number);
}
/**
 * print_binary - Prints decimals to binarys
 * @n: number in base 10 given by main
 * Return: NOTHING, just prints!
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int operand = 0, prev = 0;

	while (n >= operand)
	{
		if (n == 0)/*At entry point is 0?*/
		{
			_putchar('0');
			break;
		}
		operand = x_to_the_n(2, i);/*Number to subtract*/
		if (operand >= n)
		{
			if (operand != n)/*For the first case when it passes the operand*/
			{
				operand = prev;
				i--;
			}
			n -= operand;
			_putchar('1');
			while (operand > 1)/*Here we start putting zeros in reverse*/
			{
				i--;
				operand = x_to_the_n(2, i);
				if (operand <= n)
				{
					n -= operand;
					_putchar('1');
				} else
					_putchar('0');
				if (operand == 0)
					_putchar('0');
			}
		}
		prev = operand;
		i++;
	}
}
