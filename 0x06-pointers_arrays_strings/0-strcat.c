#include "holberton.h"
#include "stdio.h"
/**
 * _strcat - copy src string ontop of dest
 * @src: Char[] to append to dest
 * @dest: Char[] to be appended to
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
       int i, j;
       for (i = 0; dest[i] != '\0'; ++i)
       {
       }

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
       dest[i] = '\0';
       return (dest);
}
