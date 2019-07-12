#include "holberton.h"

/**
 * main - function that prints the number of arguments passed
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	if (argc > 1)
		printf("%d\n", argc - 1);

	return (0);
}
