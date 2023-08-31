#include "main.h"

/**
 * flip_bits - return the numnber of bits to flip to a number from another
 * @n: ...
 * @m: ..
 *
 * Return: ....
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbs;

	for (nbs = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbs++;
	}

	return (nbs);
}
