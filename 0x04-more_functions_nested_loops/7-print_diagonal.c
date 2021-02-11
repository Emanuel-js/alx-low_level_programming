#include "holberton.h"


/**
 * print_diagonal - Print diagonal dependent on the integer n.
 * @n : The number of '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;
	int gap;

	for (i = 0; i < n; i++)
	{
		for (gap = 0; gap < i; gap++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
