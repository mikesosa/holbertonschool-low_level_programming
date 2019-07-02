#include "holberton.h"

/**
 * _strlen - finding the lenght of a string.
 * @s: first pointer
 * Return: it returns the length of the string.
 */
int _strlen(char *s)
{
	int str;

	str = 0;
	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}
