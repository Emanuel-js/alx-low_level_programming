#include "holberton.h"


/**
 * print_diagonal - Print diagonal dependent on the integer n.
 * @n : The number of '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\');
	}
	_putchar('\n');
}
