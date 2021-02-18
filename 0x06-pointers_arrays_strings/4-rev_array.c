#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
        int temp[n];
        int i = 0, j;

        while (i < n)
        {
            temp[n - 1 - i] = a[i];
            i++;
        }
        for (j = 0; j < n; j++)
        {
             a[j] = temp[j];
        }
}
