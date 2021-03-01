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
  
      if (argc > 1)
      {
          for (i = 1; i < argc; i++)
          {
                mul = argv[i] * argv[i + 1];
          }
      }
      return (mul);
}
