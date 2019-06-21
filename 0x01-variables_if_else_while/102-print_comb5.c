#include <stdio.h>
/**
 * main - Patience
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, c;

	for (x = 48 ; x <= 57 ; x++)
	{
		for (y = 48 ; y <= 57 ; y++)
		{
			for (z = 48 ; z <= 57 ; z++)
			{
				for (c = 48 ; c <= 57 ; c++)
				{
					if (((x * 10) + y) < ((z * 10) + c))
					{
					putchar(x);
					putchar(y);
					putchar(32);
					putchar(z);
					putchar(c);
					if (x != 57 || y != 56 || z != 57 || c != 57)
					{
					putchar(44);
					putchar(32);
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
