#include "holberton.h"

/**
 * _strcmp - compares two string
 * @s1: string variable 1
 * @s2: string variable 2
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int a, result;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] > s2[a])
		{
			result = s1[a] - s2[a];
			return (result);
		}
		else if (s1[a] < s2[a])
		{
			result = s1[a] - s2[a];
			return (result);
		}

	}
	return (0);
}
