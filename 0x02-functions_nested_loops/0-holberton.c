#include "holberton.h"
/**
 * main - prints Holberton
 *
 * Return: (0) Success
 *
 */
int main(void)
{
	int c;

	char holberton[10] = "Holberton\n";

	while (holberton[c] != '\0')
	{
		_putchar(holberton[c]);
	c++;
	}
	return (0);
}
