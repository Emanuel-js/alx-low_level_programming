#include "holberton.h"

/**
 * puts_half - Print second half of a string
 * @str: String whose value is to be printed
 * Return: Always 0.
 */
 
 void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (n = (i + 1) / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
