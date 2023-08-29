#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list.
 * @head: Pointer to the head of the linked list
 * By: Sina Mathew
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *now = head;
	int sum = 0;

	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}
	return (sum);
}
