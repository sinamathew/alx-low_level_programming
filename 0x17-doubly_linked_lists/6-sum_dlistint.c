#include "lists.h"

/**
 * sum_dlistint - returns the sum of the values of a doubly-linked list
 * @head: head of the list
 *
 * By: Sina Mathew
 * Return: sum of all node values
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
		total += head->n, head = head->next;
	return (total);
}
