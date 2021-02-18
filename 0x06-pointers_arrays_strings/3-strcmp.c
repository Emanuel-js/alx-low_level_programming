#include "holberton.h"

/**
 * _strcmp - compares two string
 * @s1: string variable 1
 * @s2: string variable 2
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
        int result;
	   
         while (s1[i] == s2[i] && s1[i] != '\0')
           i++;
           if (s1[i] > s2[i])
           {
	    	 result = s1[i] - s2[i];
             	 return(result);
           }

           else if (s1[i] < s2[i])
           {
	   	  result = s1[i] - s2[i];
            	  return(result);
           }
           else
	     return 0;

	   return 0;
}