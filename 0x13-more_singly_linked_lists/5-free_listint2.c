#include "lists.h"
/**
 * free_listint2 - Frees the memory used before and sets head to NULL
 * @head: The head node
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = *head;
		*head = (*head)->next;/*Needed () cuz syntaxis*/
		free(tmp);
	}
	*head = NULL;
}
