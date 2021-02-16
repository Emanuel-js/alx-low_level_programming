#include "holberton.h"
/**
 * reset_to_98 - Reset int provided using pointers to 98.
 * @n: Int whose value is to be replaced to 98
 * Return: Always 0.
 */
 void swap_int(int *a, int *b)
{
	 int temp = *a;
	 
	*a = *b;
	*b = temp;
}
