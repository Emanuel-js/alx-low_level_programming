#include "holberton.h"


/**
 *print_square - Print squre .
 * @n : The number of lines using '#' characters to use
 * Return: Void.
 */
 
void print_square(int size)
{
    int i,j;
    for(i = 0; i <= size; i++)
    {
        for(j = 0 j<= size; j++)
        {
              _putchar("#");
        }
    }
}
