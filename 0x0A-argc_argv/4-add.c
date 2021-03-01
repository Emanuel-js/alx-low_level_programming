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
        int i,sum = 0;
        if (args == 0)
        {
              printf("0\n");
        }
        else
        {
               for (i = 1; i < args; i++)
               {
                  sum += atio(argv[i]);
               }
        }
      	printf("%d\n", sum);
        return (0);
      
}
