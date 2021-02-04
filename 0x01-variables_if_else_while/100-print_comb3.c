  
#include <stdio.h>
/**
*
* main -Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
int c, t;
for (c = '0'; c <= '9'; c++)
{
for (t = c + 1; t <= '9'; t++)
{
putchar(c);
putchar(t);
if (c != '8' || t != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
