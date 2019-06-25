#include "holberton.h"
#include <stdio.h>
/**
 * jack_bauer - prints the time 24hrs
 *
 * Returns nothing
 */
void jack_bauer(void)
{
	int hours;
	int min;
	int w, x, y, z;

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((w = hours / 10) + '0');
			_putchar((x = hours % 10) + '0');
			_putchar(':');
			_putchar((y = min / 10) + '0');
			_putchar((z = min % 10) + '0');
			_putchar('\n');
		}
	}


}
