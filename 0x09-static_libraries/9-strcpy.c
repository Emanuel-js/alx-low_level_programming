#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed by src including \0 to dest
 * @src: points at a string
 * @dest: copies the string value
 *
 * Return: the value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
