#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - get value using key
 * @ht: hast table
 * @key: used to get the value
 *
 * Return: the value or NULL if not key like that
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *check = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL); /* edge case checks */

	index = key_index((const unsigned char *)key, ht->size);

	check = ht->array[index];
	while (check)
	{ /* check all the linked lists in this index */
		if (!strcmp(key, check->key))
			return (check->value); /* found match, return */
		check = check->next;
	}
	return (NULL); /* no key like that in tha array */
}
