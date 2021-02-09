#include "holberton.h"
/**
 * _islower - checks if letter is lowercase
 * @c: integer from which to check whether references a lowercase letter or not
 * Return: Void.
 */

int _islower(int c)
{

	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
