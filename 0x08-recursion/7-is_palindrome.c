#include "holberton.h"

/**
 * compare - compares the last with the first letter
 * @s: string to check
 * @e: increasing variable
 * @c: lenght total of the string
 * @half: the middle of the string
 * Return: 0 if not 1 if yes.
 */
int compare(char *s, int e, int c, int half)
{
	if (s[e] == s[c])
	{
		if (s[e] == s[c] && e == half)
		{
			return (1);
		}
		return (compare(s, e + 1, c - 1, half));
	}
	return (0);
}
/**
 * counter - counts lenght of char
 * @s: string to check
 * @n: increasing variable
 * Return: 0 if not 1 if yes.
 */
int counter(char *s, int n)
{
	if (*s == 0)
	{
		return (n);
	}
	return (counter(s + 1, n + 1));
}
/**
 * is_palindrome - check if a scring is palindrome
 * @s: string to check
 * Return: 0 if not 1 if yes.
 */
int is_palindrome(char *s)
{
	int n = 0;
	int e = 0;
	int half = 0;
	int c = counter(s, n);

	half = c / 2;
	return (compare(s, e, c - 1, half));
}
