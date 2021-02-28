#include "holberton.h"

/**
 * _strncat - function that concatenates two string
 * @dest: pointer to string variable
 * @src: pointer to string variable
 * @n: the limiter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		if (j < n)
		{
			dest[i] = src[j];
		}
	}
	return (dest);

}
