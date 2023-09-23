#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: points to the head of the element.
 * By: Sina Mathew
 *
 * Return: count, number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
