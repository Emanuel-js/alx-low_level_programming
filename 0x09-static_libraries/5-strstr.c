#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: loacted substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, m;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (m = i, j = 0; needle[j] != '\0'; j++, m++)
		{
			if (needle[j] != haystack[m] || haystack[m] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
