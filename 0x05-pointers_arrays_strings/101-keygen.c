#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Random number generator
 *
 * Return: number
 */
int main(void)
{
  int len = 0, password;

  srand(time(NULL));
  while (len < 8)
  {
    password = (rand() % 123)+1;
    if ((password >= 65 && password <= 90) || password >= 97)
    {
      printf("%c",password);
    }
    else
    {
      printf("%c", password % 10);
    }
    len++;
  }
  printf("\n");
  return (0);
}
