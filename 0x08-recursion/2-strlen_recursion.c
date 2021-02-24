#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string
 *
 * Return: length of string, s
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;

	if (*s)
	{
		count ++;
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
