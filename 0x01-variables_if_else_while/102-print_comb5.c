#include <stdio.h>
/**
 * main - Patience
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, c;

	for (x = '0' ; x <= 57 ; x++)
	{
		for (y = '0' ; y <= 57 ; y++)
		{
			for (z = '0' ; z <= 57 ; z++)
			{
				for (c = '0' ; c <= 57 ; c++)
				{
					if (((x * 10) + y) < ((z * 10) + c))
					{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(c);
					if (x != 57 || y != 56 || z != 57 || c != 57)
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
