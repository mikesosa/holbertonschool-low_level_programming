#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char ln = '\n';

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}

	putchar(ln);

	return (0);
}
