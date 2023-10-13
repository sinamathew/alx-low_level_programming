#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints a doubly-linked list
 * @h: linked list node
 *
 * By: Sina Mathew
 *
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int lenght = 0;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	while (h != NULL)
		printf("%d\n", h->n), ++lenght, h = h->next;
	return (lenght);
}
