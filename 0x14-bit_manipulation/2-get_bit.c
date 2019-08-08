#include "holberton.h"
/**
 * get_bit - returns the index of a binary number
 * @n: number in base 10 given by main
 * @index: index given by main
 * Return: NOTHING, just prints!
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int count = 0, tmp = n, i = 0, j = 0;
	int num[1024];

	if (index >= sizeof(n) * 8)
		return (-1);
	if (n == 0 && index == 0)
		return (0);
	while (tmp > 0)
	{
		tmp = tmp >> 1;
		count++;
	}
	for (count -= 1; count >= 0; count--, j++)
	{
		i = n >> count;
		if (i & 1)
			num[count] = 1;
		else
			num[count] = 0;
	}
	return (num[index]);
}
