#include "holberton.h"

/**
 * jack_bauer - prints the time 24hrs
 *
 * Returns nothing
 */
void times_table(void)
{
	int x;
	int y;
	int z;
	for (y = 0; y <= 9; y++)
	{
		for(x = 0; x <= 9; x++)
		{
			z = y * x;
			if( z == 0)
			{
				if(x != 0)
				{
					_putchar(' ');
				}
				_putchar('0');
			}
			else if(z <= 9)
			{	
				_putchar(' ');
				_putchar((z % 10) + '0');
			} else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (x != 9)
			{		
				_putchar(',');
				_putchar(' ');
			}
		}

	_putchar('\n');
	}	
}
