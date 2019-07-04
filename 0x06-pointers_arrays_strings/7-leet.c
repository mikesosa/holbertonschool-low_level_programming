#include "holberton.h"

/**
 * *leet - encoding to 1337
 * @s: string to work
 * Return: the result.
 */
char *leet(char *s)
{
	char letters[11] = "AEOTL";
	char numbers[6] = "43071";
	int a, b;

	for (a = 0 ; letters[a] != '\0' ; a++)
	{
		for (b = 0; s[b] != '\0' ; b++)
		{
			if (s[b] == (letters[a] + 32) || s[b] == letters[a])
			{
				s[b] = numbers[a];
			}
		}
	}
	return (s);
}
