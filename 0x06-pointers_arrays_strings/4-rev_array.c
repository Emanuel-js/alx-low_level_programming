#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
