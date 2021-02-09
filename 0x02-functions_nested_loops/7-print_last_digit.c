#include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number to print last digit of
 *
 * Return: the last digit as an int
 */

int print_last_digit(int n)
{
	int retval;

	if (n < 0)
	{
		retval = (n % 10) * -1;
	}
	else
	{
		retval = n % 10;
	}
	_putchar(retval + '0');
	return (retval);
}
