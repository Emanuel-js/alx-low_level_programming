#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point for writing entire lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
      char ch;

        for (ch = 'z' ; ch >= 'a' ; ch--)
        {
          putchar(ch);
        }
        putchar('\n');
        return (0);
}
