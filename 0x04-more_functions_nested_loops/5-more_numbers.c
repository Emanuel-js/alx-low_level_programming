#include "holberton.h"

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
 */
 void more_numbers(void)
 {   
     int i;
     int j;
     
    for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
 }
