#include "holberton.h"
/**
 * print_sign - checks if letter provided is in fact a letter
 * @n: integer from which to check whether is positive, negative or zero
 * Return: Void.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
