#include "lists.h"

/**
 * print_listint - Function prints all nodes of a linked list
 * @h: The head node
 * Return: @cnt ammout of nodes
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
