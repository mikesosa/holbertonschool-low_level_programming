#include <stdio.h>

/**
 * print_array - Prints array numbers
 * @a: Value of the array
 * @n: The size of the array
 * Return: Void;
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j < n ; j++)
	{
		printf("%d", a[j]);
		if (j < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
