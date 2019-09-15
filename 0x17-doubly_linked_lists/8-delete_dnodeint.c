#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @index: index given by main
 * @head: head node given by main
 *
 * Return: 1 if success -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	while (count != index && temp)
	{
		count++;
		if (temp)
			temp = temp->next;
	}
	if (!temp) /* if we are null, looped too far */
		return (-1);
	if (temp->next) /* if it is not null we reassign */
		temp->next->prev = temp->prev;
	if (temp->prev) /* if it is not null we reassign */
		temp->prev->next = temp->next;
	if (index == 0) /* if this is 0 then cut off first node */
		*head = (*head)->next;
	free(temp);
	return (1);
}
