#include "holberton.h"

/**
 * puts2 - prints the string
 * @str: string variable
 *
 * Return: 0
 */
 void puts2(char *str)
{

    int i = 0;
    
    while(str[i] != '\0')
    {
        if(i % 2 == 0)
        {
            _putchar(str[i]);

        }
    }
    _putchar('\n');
}
