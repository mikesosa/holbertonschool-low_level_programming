#include "holberton.h"
/**
 * get_bit - returns the index of a binary number
 * @n: number in base 10 given by main
 * @index: index given by main
 * Return: NOTHING, just prints!
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int count = 0, tmp = n, i = 0, j = 0, k;
	int num[1024];

	if (!n)
		return (-1);
	while (tmp > 0)
	{
		tmp = tmp >> 1;
		count++;
	}
	k = count - index - 1;
	for (count -= 1; count >= 0; count--, j++)
	{
		i = n >> count;
		if (i & 1)
			num[j] = 1;
		else
			num[j] = 0;
	}
	return (num[k]);
}
