#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to string variable
 * @src: pointer to string variable
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n, m;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}

	for (m = 0; src[m] != '\0'; m++, n++)
	{
		dest[n] = src[m];
	}
	dest[n] = '\0';
	return (dest);
}
