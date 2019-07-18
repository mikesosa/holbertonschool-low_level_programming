i#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
* strtow - function that converts a 2d array do a 1d
* @str: String
* Return: the new array
*/

char **strtow(char *str)
{
	char **pointer;
	int cnt = 0;
	int sLength = 0;
	int i = 0;
	int a = 0;
	int b = 0;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			cnt++;
		if (str[i] != ' ' && str[i + 1] == '\0')
			cnt++;
	}
	if (cnt == 0)
		return (NULL);
	pointer = malloc(sizeof(char *) * (cnt + 1));
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0, a = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			sLength = 0;
		if (str[i] != ' ')
			sLength++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			pointer[a] = malloc(sizeof(char) * sLength + 1);
			if (pointer[a] == NULL)
			{
				for ( ; a >= 0; a--)
					free(pointer[a]);
				free(pointer);
				return (NULL);
			}
			a++;
		}

	}
	for (i = 0, a = 0, b = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\0' &&
		a < cnt &&
		(str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			pointer[a][b] = str[i];
			b++;
			pointer[a][b] = '\0';
			a++;
			b = 0;
		}
		else if (str[i] != ' ' && str[i] != '\0')
		{
			pointer[a][b] = str[i];
			b++;
		}
	}
	pointer[cnt] = NULL;
	return (pointer);
}
