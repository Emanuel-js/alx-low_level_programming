#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point for writing entire base16 numeric set
*
* Return: Always 0 (Success)
*/
int main(void)
{
        int n;
        for(ch='0'; ch<='9'; ch++)
        {
            putchar(ch);
            putchar(',');
        }
        putchar('\n');
        return(0);
}
