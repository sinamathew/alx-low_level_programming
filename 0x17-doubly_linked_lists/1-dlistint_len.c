#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly-linked list
 * @h: linked list node
 *
 * By: Sina Mathew
 * Return: legnth of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	while (h != NULL)
		h = h->next, ++lenght;
	return (lenght);
}
