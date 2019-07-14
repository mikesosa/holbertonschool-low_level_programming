#include "holberton.h"
/**
 * main - function that prints the sum of arguments
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: Error if more that one argument, 0 if negatives numbers
 */
int main(int argc, char *argv[])
{
int number;
int count = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}

number = atoi(argv[1]);
	if (number > 0)
	{
		while (number >= 25)
		{
			number -= 25;
			count++;
		}
		while (number >= 10)
		{
			number -= 10;
			count++;
		}
		while (number >= 5)
		{
			number -= 5;
			count++;
		}
		while (number >= 2)
		{
			number -= 2;
			count++;
		}
		while (number >= 1)
		{
			number -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
