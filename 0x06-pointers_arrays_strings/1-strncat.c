#include "holberton.h"
#include "stdio.h"
/**
 * _strncat - copy src string ontop of dest
 * @src: Char[] to append to dest
 * @dest: Char[] to be appended to
 * Return: Always 0.
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
