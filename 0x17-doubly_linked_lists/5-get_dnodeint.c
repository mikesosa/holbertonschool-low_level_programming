#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves some node at some index
 * @head: head node given by main
 * @index: index given by main
 *
 * Return: returns node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp)
	{
		if (count == index)
			break;
		tmp = tmp->next;
		count++;
	}
	return (tmp);
}
