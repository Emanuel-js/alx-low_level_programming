#include "holberton.h"
/**
 * _isalpha - checks if letter provided is in fact a letter
 * @c: integer from which to check whether references a letter or not
 * Return: Void.
 */
 
int print_sign(int n)
{
if(n>0)
{
putchar('+');
return(1);
}
else if(n<0)
{
putchar('-');
return(-1);
}
else{
pustcahr('0');
return(0);
}
}
