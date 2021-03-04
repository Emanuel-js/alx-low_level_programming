#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input character
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
