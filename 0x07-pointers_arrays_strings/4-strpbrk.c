#include "holberton.h"

/**
 * *_strpbrk - finding a char in an array
 * @s: source
 * @accept: the only chars accepted
 * Return: the new value of s.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int count1, count2;

	for (count1 = 0 ; s[count1] != '\0' ; count1++)
	{
		for (count2 = 0 ; accept[count2] != '\0' ; count2++)
		{
			if (accept[count2] == s[count1])
			{
				return (s + count1);
			}
		}
	}
	return (0);
}
