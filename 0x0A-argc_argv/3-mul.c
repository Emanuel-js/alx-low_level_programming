#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: counts the number of command line arguments
 * @argv: an array that points to argc
 *
 * Return: 0
 */

int main(int argc , char *argv[])
{
      int i, mul;
  
      if (argc == 3)
      {
          for (i = 0; i < argc; i++)
          {
                mul = atoi(argv[i]) * atoi(argv[i + 1]);
                printf("%d\n", mul);
          }
      }
      else
      {
           printf("Error\n");
		return (1); 
      }
      return (0);
}
