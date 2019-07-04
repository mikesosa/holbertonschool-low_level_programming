#include "holberton.h"

/**
 * reverse_array - reversing an array
 * @a: array
 * @n: lenght of array
 * Return: the destiny.
 */
void reverse_array(int *a, int n)
{
	int ld, fd, temp;

	fd = 0;
	ld = n - 1;

	while (fd <= ld)
	{
		temp = a[ld];
		a[ld] = a[fd];
		a[fd] = temp;
		fd++;
		ld--;
	}
}
