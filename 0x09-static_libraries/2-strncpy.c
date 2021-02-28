#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to string variable
 * @src: pointer to string variable
 * @n: limiter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
