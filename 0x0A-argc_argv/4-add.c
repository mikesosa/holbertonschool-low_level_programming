#include "holberton.h"

/**
 * main - function that prints the sum of arguments
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0 if there are no argumentes passed, Error if the args ar not ints
 */

int main(int argc, char *argv[])
{
	int j;
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
		argc--;
	}
	printf("%i\n", sum);
	return (0);
}
