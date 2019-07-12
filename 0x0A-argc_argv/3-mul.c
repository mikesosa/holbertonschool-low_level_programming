#include "holberton.h"

/**
 * main - function that prints the multiplicacion of two numbers
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0 if there are two args, 1 if the user enters wrong quantity of ags;
 */

int main(int argc, char *argv[])
{

	if (argc > 2 && argc < 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
