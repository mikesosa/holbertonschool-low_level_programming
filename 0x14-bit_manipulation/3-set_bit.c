#include "holberton.h"
/**
 * set_bit - sets bit at index
 * @n: number in base 10 given by main
 * @index: index given by main
 * Return: 1 if ok, -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
