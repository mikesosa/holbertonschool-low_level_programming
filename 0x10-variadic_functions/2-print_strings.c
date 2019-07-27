#include "variadic_functions.h"

/**
 * print_strings - prints only the strings
 * @separator: the thing printed between the strings
 * @n: number of args passed
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *str;

	va_start(valist, n);

	while (i < n)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		i++;
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
