#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main -Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
  int n;
  int ld;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  ld=n%10;
  if(ld>5)
    {
      printf("Last digit of and %d is %d greater than 5\n", n,ld);
    }
  else if(ld<6)
    {
      printf("Last digit of and %d is %d less than 6\n", n,ld);
    }
  else
    {
      printf("Last digit of and %d is %d 0\n", n,ld);
    }
}

