#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Generates random valid passwords for the
 *program 101-crackme.
 *Return: Always 0.
 */

int main(void)
{
	int r;
	int c;
	int total;


	srand(time(NULL));
	for (c = 0,total = 4000; total > 10; c++)
	{
		r = (rand() % 125) + 1;
		printf("%c", r);
		total -= r;
	}
	printf("%c", total);

	return (0);
}
