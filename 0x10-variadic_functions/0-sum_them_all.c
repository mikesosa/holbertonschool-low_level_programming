#include "variadic_functions.h"

/**
 * sum_them_all - sums all the args passed
 * @n: the number of args
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int result = 0;
	unsigned int i = 0;

	va_start(valist, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		result += va_arg(valist, int);
		i++;
	}
	va_end(valist);
	return (result);
}
