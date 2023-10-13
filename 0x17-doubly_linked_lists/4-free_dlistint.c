#include "lists.h"

/**
 * free_dlistint - frees a doubly-linked list
 * @head: head of the list
 *
 * By: Sina Mathew
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	void *temp = NULL;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
		temp = head, head = head->next, free(temp);
}
