#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node into a doubly-linked list
 * @h: head of the node
 * @idx: index to insert the node
 * @n: node's value
 *
 *
 * By: Sina Mathew
 * Return: the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *inode = malloc(sizeof(dlistint_t)),
		*next = h != NULL ? *h : NULL, *prev = NULL;

	if (inode == NULL || h == NULL)
		return (free(inode), NULL);
	inode->n = n, inode->prev = NULL;
	for (; next != NULL && idx; --idx)
		prev = next, next = next->next;
	if (idx != 0)
		return (free(inode), NULL);
	if (prev == NULL)
	{
		*h = inode, inode->next = next;
		if (next != NULL)
			next->prev = inode;
	}
	else
	{
		prev->next = inode, inode->next = next;
		inode->prev = prev;
		if (next != NULL)
			next->prev = inode;
	}
	return (inode);
}
