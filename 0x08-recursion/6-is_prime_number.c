#include "holberton.h"

/**
 * divide - find a prime number
 * @i: input int i
 * @n: input int n
 * Return: boolean val of the state of inputs
 */

int divide(int n, int i)
{
	if (i == 0)
		return (0);

	if (n < 2 || n % i == 0)
		return (1);

	return (divide(n, i + 1));
}

 /**
  * is_prime_number - printing prime numbers
  * @n: input integer value
  *
  * Description: returns 1 if the input integer is a
  * prime number, otherwise return 0
  * Return: returns the state of the inout value
  */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divide(n, 2));
}
