#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: ....
 * @index: ....
 *
 * Return: the bit value
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int v;

	if (n == 0 && index < 64)
		return (0);

	for (v = 0; v <= 63; n >>= 1, v++)
	{
		if (index == v)
		{
			return (n & 1);
		}
	}

	return (-1);
}
