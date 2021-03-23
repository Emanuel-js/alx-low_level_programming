#include "lists.h"
/**
 *print_listint - Function that prints all the elements of a list_t list.
 *
 *@h: header pointer.
 *
 *Return:  the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
