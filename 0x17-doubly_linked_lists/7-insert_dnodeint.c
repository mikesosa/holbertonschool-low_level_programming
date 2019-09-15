#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @idx: index given by main
 * @n: data to insert
 * @h: head node given by main
 *
 * Return: New node if success Null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (idx == 0)/*For the first node*/
		return (add_dnodeint(h, n));
	/*for the rest*/
	while (count < idx)
	{
		tmp = tmp->next;
		count++;
	}
	if (!tmp)
		return (NULL);
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;
	new->next = tmp;

	return (new);
}
