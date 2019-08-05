#include "lists.h"
/**
 * free_listint - Frees the memory used before
 * @head: The head node
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
