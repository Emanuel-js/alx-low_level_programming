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
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		r = (rand() % 125) + 1;
		printf("%c", r);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
