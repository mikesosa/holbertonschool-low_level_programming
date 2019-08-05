#include "lists.h"
/**
 * pop_listint - deleted the first node and returns its value
 * @head: The head node
 * Return: @val the value of that head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val = 0;

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;/*Needed () cuz syntaxis*/
	val = (*head)->n;
	free(*head);
	*head = tmp;
	return (val);
}
