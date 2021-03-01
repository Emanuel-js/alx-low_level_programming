#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: counts the number of command line arguments
 * @argv: an array that points to argc
 *
 * Return: 0
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
      }
      return (0);
}
