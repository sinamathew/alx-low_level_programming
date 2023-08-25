#include "lists.h"

/**
 * free_list - free list
 * @head: the list
 * By: Sina Mathew
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

