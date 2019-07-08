#include "holberton.h"

/**
 * *_strstr - finding a word in a string
 * @haystack: source
 * @needle: the source
 * Return: the new value of s.
 */
char *_strstr(char *haystack, char *needle)
{
	char *first;
	char *word;

	while (haystack != 0)
	{
		first = haystack;
		word = needle;

		while (word != 0 && haystack != 0 && *haystack == *word)
		{
			haystack++;
			word++;
		}

		if (*haystack == 0)
		{
			return (0);
		}

		if (*word == 0)
		{
			return (first);
		}

		haystack++;
	}
	return (0);
}
