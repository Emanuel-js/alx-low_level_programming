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
	listint_t *new;

	new = malloc(sizeof(list_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
