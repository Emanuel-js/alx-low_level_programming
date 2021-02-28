#include "holberton.h"

/**
 * _memset - function that fills memoery with a constant byte
 * @s: pointer to array to be filled
 * @b: constant byte used to fill memory
 * @n: limiter to the number of bytes to be filled
 *
 * Return: returns pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	i = 0;
	while (i < n)
	{
		memory[i] = value;
		i++;
	}
	return (memory);
}
