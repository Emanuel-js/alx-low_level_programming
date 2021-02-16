#include "holberton.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int i;
	int a, p;

	a = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (a < 0)
				a = (a * 10) - (s[i] - '0');
			else
				a = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		a *= -1;

	return (a);
}
