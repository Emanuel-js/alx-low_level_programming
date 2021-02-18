#include "holberton.h"

/**
 * cap_string - Function that capitalizes all words of a string
 *
 * @s: s is the world to be analyzed
 *
 * Return: Always 0.
 */
 
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		if (str[i] >= 97 && str[i] <= 122
		 && (str[i - 1] == 32 || str[i - 1] == ','
		 || str[i - 1] == ';' || str[i - 1] == '.'
		 || str[i - 1] == '!' || str[i - 1] == '?'
		 || str[i - 1] == '"' || str[i - 1] == '('
		 || str[i - 1] == ')' || str[i - 1] == '{'
		 || str[i - 1] == '}' || str[i - 1] == '\n'
		 || str[i - 1] == '\t'))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
