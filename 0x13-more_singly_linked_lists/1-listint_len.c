#include "lists.h"
/**
 * listint_len - Function calculates the lenght of a linked list
 * @h: The head node
 * Return: @cnt integer value
 */
size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
