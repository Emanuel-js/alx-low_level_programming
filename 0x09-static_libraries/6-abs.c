#include "holberton.h"
/**
 * _abs -  absolute value of an integer
 * @n: integer to be tested
 * Return: abs(n)
 */
int _abs(int n)
{
	return (n < 0 ? -1 * n : n);
}
