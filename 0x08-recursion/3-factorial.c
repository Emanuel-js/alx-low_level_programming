#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: factorial value
 *
 * Return: -1 if n is less than 0 to indicate error
 */
int factorial(int n)
{
       if (n < 0)
       { 
            return (-1);
       }
       else if (n == 0)
       {
            return (1);
       }
       else
       {
            return (n * factorial(n -1));
       }
       return (0);
}
