#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of a linked list
 * @n: the int to store in N
 * @head: Node in the head
 * Return: @*head the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	if (!head)
		return (NULL);
	last = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (*head);
}
