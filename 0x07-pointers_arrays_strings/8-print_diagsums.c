#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: source matrix
 * @size: size of matrix
 * Return: the new value of s.
 */
void print_diagsums(int *a, int size)
{
	int i, j, tmp1, tmp2;
	int total = size * size;

	i = 0;
	j = 0;
	tmp1 = 0;
	tmp2 = 0;

	while (j < total)
	{
		tmp1 += a[j + i];
		j += size;
		i++;
	}

	while (j > 0)
	{
		tmp2 += a[j - i];
		j -= size;
		i--;
	}

	printf("%d, %d\n", tmp1, tmp2);
}
