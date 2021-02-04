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

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= first; second+=2)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first==second || first>second)
			{
			break;
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
