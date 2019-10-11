#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - generates the key where the element will be stored
 * @key: string to play with
 * @size: the size of the array
 *
 * Return: the key numbwe
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int daKey;

	daKey = hash_djb2(key) % size;
	return (daKey);
}
