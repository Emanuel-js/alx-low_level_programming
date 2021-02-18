#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: string variable
 * Return: str
 */
char *leet(char *str)
{
	int i=0, j;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071";

	while (str[i] != '\0')
	{
		for (j = 0; lower[j] != '\0' && upper[j] != '\0'; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = numbers[j];
			}
		}
		i++;
	}
	return (str);
}
