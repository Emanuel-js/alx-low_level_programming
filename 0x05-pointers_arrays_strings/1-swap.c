#include "holberton.h"

/**
 * swap_int - Mirror the values of the 2 provided integers.
 * @a: Int whose value is to be exchanged with b
 * @b: Int whose value is to be exchanged with a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

