#include "holberton.h"

/**
 * swap_int - swaping the value.
 * @a: first pointer
 * @b: second pointer
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
