#include "holberton.h"

/**
*rev_string - Reverse the input stining.
*@s is ponter string.
*Return 0.
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
