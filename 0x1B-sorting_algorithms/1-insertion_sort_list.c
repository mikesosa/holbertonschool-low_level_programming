#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
  * insertion_sort_list - sorting a double linked list with insertion
  * @list: double linked list
  *
  * Return: NOOOOOTHING
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *element = NULL;
	listint_t *tmp = NULL;
	listint_t *head = NULL;

	if (!(*list) || !list || !(*list)->next)
		return;

	head = *list;
	while (head)
	{
		element = head;
		while (element->prev && element != NULL)
		{
			tmp = element->prev;
			if (tmp->n > element->n)
			{
				if (tmp->prev)
					(tmp->prev)->next = element;
				element->prev = tmp->prev;
				tmp->next = element->next;
				tmp->prev = element;
				element->next = tmp;
				if (tmp->next)
					(tmp->next)->prev = tmp;
				if (!element->prev)
					*list = element;
				print_list(*list);
			}
			else
				element = element->next;
				if (!element)
					return;
		}
		head = head->next;
	}
}
