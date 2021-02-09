#include "holberton.h"
#include "string.h"
/**
 * print_alphabet - print entire alphabet
 *
 * Return: Void.
 */

void print_alphabet(void)
{
	char character;

	for (character = 'a' ; character <= 'z' ; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
