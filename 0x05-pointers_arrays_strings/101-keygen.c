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
	for (c = 0,total = 12000; total > 100; c++)
	{
		r = (rand() % 120) + 1;
		printf("%c", r);
		total = total-r;
	}
	printf("%c", total);
}
