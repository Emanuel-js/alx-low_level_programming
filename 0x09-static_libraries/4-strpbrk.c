#include "holberton.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: points to string
 * @accept: set of bytes being searched for
 *
 * Return: s or '\0'
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
