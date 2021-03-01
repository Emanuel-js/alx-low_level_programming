#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 * @argc: counts the command line arguments
 * @argv: pointer to argc
 *
 * Return: 1 if number contains symbols that are not digits,
 * 0 if no number is passed
 */
int main(int argc, char *argv[])
{
	int count, num, sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (num = 0; argv[count][num]; num++)
		{
			if (argv[count][num] < '0' || argv[count][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}

