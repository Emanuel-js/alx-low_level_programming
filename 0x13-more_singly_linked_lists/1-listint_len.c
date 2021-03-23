#include "lists.h"

/**
 *listint_len - Function that number of elements in a linked list_t list.
 *
 *@h: header pointer.
 *
 *Return:  the number of element.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
