#include "holberton.h"


int rest(int cnt, int num)
{
	while (num >= 25)
	{
		num -= 25;
		cnt++;
	}
	while (num >= 10)
	{
		num -= 10;
		cnt++;
	}
	while (num >= 5)
	{
		num -= 5;
		cnt++;
	}
	while (num >= 2)
	{
		num -= 2;
		cnt++;
	}
	while (num >= 1)
	{
		num -= 1;
		cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}
/**
 * main - function that prints the sum of arguments
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 if there are no argumentes passed, Error if the args ar not ints
 */

int main(int argc, char *argv[])
{
	int cnt = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	int num = atoi(argv[1]);

	if (num > 0)
		rest(cnt, num);
	else
	{
		printf("0\n");
		return (0);
	}
}
