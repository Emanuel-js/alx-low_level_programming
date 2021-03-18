#include "lists.h"

/**
 *add_node - Function that adds a new node at the beginning of a list_t list.
 *
 *@head: header pointer.
 *@str: string of pointer that contains a data
 *
 *Return:  the address ofthe new element or Null.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
