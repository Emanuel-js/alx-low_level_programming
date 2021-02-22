#include "holberton.h"

/**
 * _strspn - gets length of prefix substring
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int c = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				c++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (c);
			}
		}
		s++;
	}
	return (c);
}
