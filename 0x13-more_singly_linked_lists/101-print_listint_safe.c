#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_start = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= loop_start)
		{
			if (loop_start == NULL)
				loop_start = current->next;

			if (current=>next >= current)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				break;
			}
		}

		current = current->next;
	}

	return (count);
}

