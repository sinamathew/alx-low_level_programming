#include "lists.h"

/**
 * list_len - Count the number of element(s) in a linked list
 * @h: takes the element
 * By: Sina Mathew
 *
 * Return: count, the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
