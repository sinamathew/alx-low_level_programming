#include "lists.h"

/**
 * add_node_end - add node
 * @head: an element
 * @str: an element
 * By: Sina Mathew
 *
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
        {
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}

