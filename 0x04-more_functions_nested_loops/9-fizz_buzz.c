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
		int Fizz = x % 3;
		int Buzz = x % 5;

		if (Fizz == 0 && Buzz == 0)
		{
			printf("FizzBuzz ");
		} else if (Fizz == 0)
		{
			printf("Fizz ");
		} else if (Buzz == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
}
