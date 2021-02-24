#include "holberton.h"

/**
 * _sqrt - Finds the natural square root of an inputted number.
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

	if (root == num / 2)
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
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (is_square_root(n, root));
}

