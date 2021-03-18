#include "lists.h"

/**
 *list_len - Function that number of elements in a linked list_t list.
 *
 *@h: header pointer.
 *
 *Return:  the number of element.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
