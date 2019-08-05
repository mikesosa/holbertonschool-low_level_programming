#include "lists.h"
/**
 * add_nodeint - add a node at the head of a linked list
 * @n: the int to store in N
 * @head: Node in the head
 * Return: @new the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
