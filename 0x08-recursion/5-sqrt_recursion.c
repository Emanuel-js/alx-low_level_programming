#include "holberton.h"
int is_square_root(int num, int root);
/**
 * is_square_root - function that returns the natural.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int is_square_root(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (num < 0 || (root * root) > num)
		return (-1);

	return (is_square_root(num, root + 1));
}

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: varaible value
 *
 * Return: -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (is_square_root(n, 0));
}

