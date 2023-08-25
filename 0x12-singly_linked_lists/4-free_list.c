#include "lists.h"

/**
 * free_list - free list
 * @head: the list
 * By: Sina Mathew
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

