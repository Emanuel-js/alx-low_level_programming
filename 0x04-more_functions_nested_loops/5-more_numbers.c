#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers from 0 to 14.
 *
 * Return: Void.
 */
 void more_numbers(void)
 {   
     int i;
     int j;
     
     for(i = 0; i < 10; i++)
     {
  
          for(j = 0; j < 14; j++)
          {
                   _putchar(j); 
          }
          _putchar('\n');
     }
     _putchar('\n');
 }
