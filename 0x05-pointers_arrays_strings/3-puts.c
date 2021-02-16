#include "holberton.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string variable
 *
 */
void _puts(char *str)
{
	int c;

	while (*(str + c))
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
