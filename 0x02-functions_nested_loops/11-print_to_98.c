#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - printing numbers until 98
 * @n: An integer
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");

	} else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		printf("\n");
	} else
	{
		printf("%d\n", n);
	}

}
