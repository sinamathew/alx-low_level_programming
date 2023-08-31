#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * By: Sina Mathew
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *current = *head;
	listint_t *temp;

	while (current != NULL)
	{
		count++;
		if (current->next >= current || current->next == head)
		{
			*head = NULL;
			break;
		}

		temp = current;
		current = current->next;
		free(temp);

	}

	*head = NULL;
	return (count);
}

