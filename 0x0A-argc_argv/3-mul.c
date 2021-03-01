#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc: counts the number of command line argument
 * @argv: array that point to argc
 *
 * Return: Error and 1 on failure and 0 on success
 */
int main(int argc, char *argv[])
{
       int mul;
	
       if (argc == 3)
       {
	       mul = atoi(argv[1]) * atoi(argv[2]);
               printf("%d\n", mul);
       }
       else
       {
	       printf("Error\n");
	       return (1);
       }
       return (0);
}
