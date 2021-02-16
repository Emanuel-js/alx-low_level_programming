#include "holberton.h"

/**
 * print_rev - Print provided string in reverse
 * @s: Pointer to string to be reversed
 * Return: Always 0.
 */
 
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	

	for (c--; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
