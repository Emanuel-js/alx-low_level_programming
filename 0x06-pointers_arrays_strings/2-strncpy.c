#include "holberton.h"

/**
 * _strncpy - Copy str to dest
 * @n: Number of bytes to use max
 * @dest: String to copied to
 * @src: String to be copied to dest
 * Return: Always 0.
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
