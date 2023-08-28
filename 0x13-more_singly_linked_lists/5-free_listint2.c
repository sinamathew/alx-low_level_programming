#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a poiter to the head element
 * By: Sina Mathew
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return ();

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
