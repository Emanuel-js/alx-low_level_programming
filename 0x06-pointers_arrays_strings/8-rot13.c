#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @str: String to be encoded
 *
 * Return: Always 0.
 */
char *rot13(char *str)
{
	int i = 0, j;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
			}
		}
                i++;
	}
	return (str);
}
