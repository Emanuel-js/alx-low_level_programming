#include "lists.h"

/**
 *add_nodeint- Function that adds a new node at the beginning of a list_t list.
 *
 *@head: header pointer.
 *@n: constant contains an intiger  data
 *
 *Return:  the address ofthe new element or Null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int *num;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	num = strdup(n);
	if (num == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = num;
	new->next = *head;

	*head = new;

	return (new);
}
