#include "lists.h"
/**
 *print_list - Function that prints all the elements of a list_t list.
 *
 *@h: header pointer.
 *
 *Return:  the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *ptr = NULL;

	ptr = h;
	if (ptt->str !=  NULL)
		printf("%s\n", "[0] (nil)");
	while (ptr != NULL)
	{
		printf("[%d] %s \n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
