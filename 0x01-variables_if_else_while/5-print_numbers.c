#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ln = '\n';

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}

	putchar(ln);

	return (0);
}
