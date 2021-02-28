#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: counts the number of command line arguments
 * @argv: an array that points to argc
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
