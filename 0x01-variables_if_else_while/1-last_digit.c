#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for random number checker
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int la;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	la = n % 10;
	if (la > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, la);
	}
	else if (la == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, la);
	}
	else if (la < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la);
	}
	return (0);
}
