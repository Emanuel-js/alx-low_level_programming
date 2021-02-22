#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: c to 1st occurance in s or NULL if no c found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
