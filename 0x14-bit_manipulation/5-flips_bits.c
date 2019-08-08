#include "holberton.h"
/**
 * flip_bits - how many bits does it take to convert a number to another
 * @n: number in base 10 given by main
 * @m: number in base 10 given by main
 * Return: cnt the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	int comp1, comp2, i = 63; /*num of bits*/

	while (i >= 0)
	{
		comp1 = n & 1;
		n = n >> 1;
		comp2 = m & 1;
		m = m >> 1;
		if (!(comp1 == comp2))
			cnt++;
		i--;
	}
	return (cnt);
}
