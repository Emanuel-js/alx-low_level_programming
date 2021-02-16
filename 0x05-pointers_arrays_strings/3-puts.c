#include "holberton.h"
/**
 * _puts - Print entire string
 * @str: String to be printed
 * Return: Always 0.
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
