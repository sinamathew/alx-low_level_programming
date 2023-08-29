#include "lists.h"

/**
 * pop-listint - delete the head node of a listint_t linked list
 * @head: pointer to a pointer to the node
 * By: Sina Mathew
 *
 * Return: the head node's data 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value = 0;

	if (*head != NULL)
	{
		temp = *head;
		value = temp->n;
		*head = (*head)->next;
		free(temp);
	}

	return (value);
}
