#include "lists.h"

/**
 *first - Apply the constructor attribute to first
 * so that it is executed before main
*/
void first(void) __attribute__ ((constructor));
/**
 *first - function that pirint a message befor the main.
 *Return: Succsess
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
