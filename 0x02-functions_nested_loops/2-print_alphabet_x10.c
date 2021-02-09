#include "holberton.h"
/**
 * print_alphabet_x10 - print entire alphabet on 10 lines
 *
 * Return: Void.
 */

void print_alphabet_x10(void)
{
	int line_count;
	char character;

	for (line_count = 0; line_count < 10; line_count++)
	{
	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
	}
}
