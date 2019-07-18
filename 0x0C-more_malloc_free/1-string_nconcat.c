#include "holberton.h"
/**
* string_nconcat - concatenates 2 strings
* @s1: string one
* @s2: string two
* @n: number of chars to concatenate
* Return: pointer, the new pointer;
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
	while (s1[i])
		i++;
	while (s2[j])
		j++;
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
	else
	{
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
	}
	return (pointer);
}

