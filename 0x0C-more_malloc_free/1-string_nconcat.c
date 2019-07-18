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
		i++;
	return (i);
}
/**
 * *print_n - returns a pointer with concatenation of n chars
 * @s1: first string
 * @s2: second string
 * @pointer: the size of the new pointer
 * @n: number of chars to pass into p
 * Return: p, a pointer to the new space of memory
 */
char *print_n(char *s1, char *s2, unsigned int n, char *pointer)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	i = 0;
	while (s1[i])
	{
		pointer[k] = s1[i];
		i++;
		k++;
	}
	j = 0;
	while (n)
	{
		pointer[k] = s2[j];
		n--;
		j++;
		k++;
	}
	pointer[k] = '\0';
	return (pointer);
}
/**
 * *string_nconcat - simply concatenates n chars from s2 with s1 to p
 * @s1: first string
 * @s2: second string
 * @n: number of chars to pass into p
 * Return: pointer, a pointer to the new space of memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = size(s1);
	j = size(s2);
	if (n >= j)
		pointer = malloc((i + j + 2) * sizeof(char));
	if (n < j)
		pointer = malloc((i + n + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	if (n >= j)
	{
		i = 0;
		while (s1[i])
		{
			pointer[k] = s1[i];
			i++;
			k++;
		}
		j = 0;
		while (s2[j])
		{
			pointer[k] = s2[j];
			j++;
			k++;
		}
		pointer[k] = '\0';
	}
	return (print_n(s1, s2, n, pointer));
}
