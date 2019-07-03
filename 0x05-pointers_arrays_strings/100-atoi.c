#include "holberton.h"

/**
 * puts_half - function to reverse strings.
 * @str: the string
 * Return: void.
 */
int _atoi(char *s)
{
	int a, b, c, d;

	a = 0;
	d = 1;

	for (i = 0 ; s[c] != '\0' ; c++)
	{
		b = s[c];

		if (b == '-')
		{
			d *= -1;
		}

		if (b >= '0' && b <= '9')
		{
			if (d < 0)
			{
				a = (a * 10) - (b - '0');
			} else
			{
				a = (a * 10) + (b - '0');
			}

			if ((s[c + 1]) < '0' || (s[c + 1]) > '9')
			{
				break;
			}
		}
	}
	if (a != 0)
	{
		return (a);
	} else
	{
		return (0);
	}
}
