#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit at a given index to 0
 * @n: ..
 * @index: ...
 *
 * Return: ...
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}
