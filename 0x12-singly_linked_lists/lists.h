#ifndef FUNCTION_LISTEDLINK_H
#define FUNCTION_LISTEDLINK_H

#include <stdio.h>
#include  <stddef.h>
#include  <stdlib.h>
#include  <string.h>
#include  <time.h>
#include  <wchar.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
