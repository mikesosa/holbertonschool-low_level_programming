#include <stdio.h>

/**
 * main - fizz buzz game
 * Return: no return.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		int fizz = x % 3;
		int buzz = x % 5;

		if (fizz == 0 && buzz == 0)
		{
			printf("FizzBuzz");
		} else if (fizz == 0)
		{
			printf("Fizz");
		} else if (buzz == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", x);
		}

		if (x < 100)
		{
			printf(" ");
		} else
		{
			printf("\n");
		}
	}

	return (0);
}
