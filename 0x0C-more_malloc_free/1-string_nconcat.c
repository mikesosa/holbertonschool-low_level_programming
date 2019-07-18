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
	unsigned int i = 0, j = 0, k = 0, lS1 = 0, lS2 = 0, total_l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lS1])
		lS1++;
	while (s2[lS2])
		lS2++;
	if (n >= lS2)
		n = lS2;
	total_l = lS1 + n + 1;
	pointer = malloc(total_l * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < total_l)
	{
		if (i < lS1)
		{
			pointer[i] = s1[j];
			i++;
			j++;
		} else if (i < total_l - 1)
		{
			pointer[i] = s2[k];
			i++;
			k++;
		} else if (i < total_l)
		{
			pointer[i] = '\0';
			i++;
		}
	}
	return (pointer);
}
