#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: p the new pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;

	if (!size)
		return (NULL);
	p = malloc(sizeof(hash_table_t));
	if (!p)
		return (NULL);
	p->size = size;
	p->array = malloc(sizeof(hash_node_t *) * size);
	if (!p->array)
		return (NULL);
	while (size--)
		p->array[size] = NULL; /* set all nodes to NULL */
	return (p);
}
