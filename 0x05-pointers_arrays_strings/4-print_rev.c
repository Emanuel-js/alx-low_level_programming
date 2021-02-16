#include "holberton.h"

/**
 * print_rev - print string in reverse followed by a newline
 * @s: string variable
 *
 */
 
 void print_rev(char *s)
{
 	int c;
    int rv;

	while(s[c] != '\0')
    {
        c++;
    }



	for (c--; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
