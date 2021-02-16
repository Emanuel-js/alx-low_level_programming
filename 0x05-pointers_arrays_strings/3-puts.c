#include "holberton.h"

/**
 * _puts - Print entire string
 * @str: String to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
