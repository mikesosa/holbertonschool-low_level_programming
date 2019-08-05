#include "lists.h"
/**
 * get_nodeint_at_index - returns a node at index number
 * @head: The head node
 * @index: The index we want to return
 * Return: @head if node found or null if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (cnt == index)
			return (head);
		head = head->next;
		cnt++;
	}
	return (NULL);
}
