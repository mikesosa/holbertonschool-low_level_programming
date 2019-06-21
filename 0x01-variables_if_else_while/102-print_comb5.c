#include <stdio.h>
/**
 * main - Patience
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, c;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = '0' ; y <= '9' ; y++)
		{
			for (z = '0' ; z <= '9' ; z++)
			{
				for (c = '0' ; c <= '9' ; c++)
				{
					if (((x * 10) + y) < ((z * 10) + c))
					{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(c);
					if (x != '9' || y != '8' || z != '9' || c != '9')
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
