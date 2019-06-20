#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, b, c, d;

	for (n = '0'; n <= '9'; n++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '1'; d <= '9'; d++)
				{
					if (((n * 10) + b) < ((c * 10) + d))
					{
						putchar(n);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (n != '9' || b != '8' || c != '9' || d != '9')
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
