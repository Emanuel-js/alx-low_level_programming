#include <stdio.h>

/**
 * main - Entry point for writing all numbers between 0 and 100,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;

	for (first = 0; first <= 8; first++)  
	{
		for (second = first+1; second <= 9; second++)
		{
			
			if (!first>=second)
			{
			putchar(first + '0');   
			putchar(second + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
