#include "variadic_functions.h"

/**
 * print_numbers - Prints out all the int passed as args
 * @separator: is the string printed between nums
 * @n: number of args
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);

	while (i < n)
	{
		printf("%d", va_arg(valist, int));
		i++;
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
