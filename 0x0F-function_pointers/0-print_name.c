#include "function_pointers.h"

/**
 * print_name - print a name in uppercase
 * @name: name of the person
 * @f: pointer to a function that prints
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
