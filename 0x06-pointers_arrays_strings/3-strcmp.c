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
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
