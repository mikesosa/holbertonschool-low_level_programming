#include "variadic_functions.h"

/**
 * print_strings - prints only the strings
 * @separator: the thing printed between the strings
 * @n: number of args passed
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, flag = 0;
	char *s;

	va_start(valist, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(valist, int));
			flag = 1;
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", (float)va_arg(valist, double));
			flag = 1;
			break;
		case 's':
			s = va_arg(valist, char *);
			if (s == NULL)
			{
				printf("(nil)");
				flag = 1;
				break;
			}
			printf("%s", s);
			flag = 1;
			break;
		}
		if (format[i + 1] != 0 && flag == 1)
			printf(", ");
		i++;
		flag = 0;
	}
	va_end(valist);
	printf("\n");
}
