#include "holberton.h"

/**
 * print_rev - print string in reverse followed by a newline
 * @s: string variable
 *
 */
 
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
