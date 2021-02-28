#include <stdio.h>

/**
 * main -  a program that prints its name, followed by a new line
 * @argc: counts all command line arguments
 * @argv: array that point to argc
 *
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
