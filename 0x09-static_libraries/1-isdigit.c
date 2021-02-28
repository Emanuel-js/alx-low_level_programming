#include "holberton.h"

/**
 * _isdigit - check for a digit 0 through 9
 * @c: integer to be checked
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	return (c >= 48 && c < 58);
}
