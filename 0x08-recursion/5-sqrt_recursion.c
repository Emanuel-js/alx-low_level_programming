#include "holberton.h"

/**
 * is_squre_root - determines the square root of
 * @j: an input value
 * @i: input value
 *
 * Description: determines the square root
 * Return: returns the input val
 */

int is_square_root(int num, int root)
{

	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (is_square_root(num, root + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: input size
 *
 * Description: If n does not have a natural square root,
 * the function should return -1
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}
