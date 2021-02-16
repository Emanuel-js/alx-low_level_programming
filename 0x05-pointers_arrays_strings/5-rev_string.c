#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string variable
 * Return (0)
 */
void rev_string(char *s)
{
	int c = 0;
	int x = 0;
	int temp;

	while(s[c] !='\0')
    {
        c++;
    }

	c--;

    while (c > x)
	{
		temp = s[c];
		s[c--] = s[x];
		s[x++] = temp;
	}

	putchar('\n');
}
