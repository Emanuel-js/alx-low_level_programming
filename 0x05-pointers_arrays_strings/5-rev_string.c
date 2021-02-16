#include "holberton.h"


/**
 * rev_string - Reverse String
 * @s: Pointer to string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c = 0;
	int x = 0;
	int temp;

	while (s[c] != '\0')
	{
		c++;
	}

	c--;

	while (i > x)
	{
		temp = s[c];
		s[c--] = s[x];
		s[x++] = temp;
	}
}
