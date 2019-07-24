#include "3-calc.h"

/**
 * main - prints the result of a basic operation
 * @argc: length of args passed to the program
 * @argv: array of arguments
 * Return: Error if more or less args, Error if
 * module by 0 or divided y 0.
 **/
int main(int argc, char **argv)
{
	int result;
	int val1 = 0;
	int val2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && val2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(val1, val2);
	printf("%d\n", result);
	return (0);
}
