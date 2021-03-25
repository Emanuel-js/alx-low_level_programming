#include "holberton.h"

/**
 *binary_to_uint-function that converts a binary number to an unsigned int
 *@b:A pointer that points to the sctring containing binary numbers
 *Return:unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int decimal = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		decimal <<= 1;
		if (b[i] == '1')
			decimal += 1;
	}
	return (decimal);
}
