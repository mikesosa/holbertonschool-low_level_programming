#include "holberton.h"

/**
 * size - returns the size of array
 * @s: array to check
 * Return: 1, a int with the size of array
 */
int size(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * *print_n - returns a pointer with concatenation of n chars
 * @s1: first string
 * @s2: second string
 * @lengthS1: length of string s1
 * @n: number of chars to pass into p
 * Return: p, a pointer to the new space of memory
 */
char *print_n(char *s1, char *s2, int lengthS1, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;

	p = malloc(sizeof(char) * (lengthS1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	while (j < n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
/**
 * *string_nconcat - simply concatenates n chars from s2 with s1 to p
 * @s1: first string
 * @s2: second string
 * @n: number of chars to pass into p
 * Return: p, a pointer to the new space of memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lengthS1 = 0;
	unsigned int lengthS2 = 0;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lengthS1 = size(s1);
	lengthS2 = size(s2);
	if (n >= lengthS2)
	{
		p = malloc(sizeof(char) * (lengthS1 + lengthS2) + 1);
		if (p == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
		while (s2[j])
		{
			p[i] = s2[j];
			j++;
			i++;
		}
		p[i] = s2[j];
		return (p);
	}

	return (print_n(s1, s2, lengthS1, n));
}
