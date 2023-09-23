#include "lists.h"

/**
 * add_node - Function add new node to the beginning of a list
 * Description: takes a pointer to a pointer to the head element of a list,
 *		and add (head) and (str) to the list.
 * @head: element
 * @str: element
 * By: Sina Mathew
 *
 * Return: new_node, NULL if fail.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);


	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
