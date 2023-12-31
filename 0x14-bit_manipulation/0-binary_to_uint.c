#include "main.h"

/**
 * binary_to_uint - a function that converts binary to unsigned int
 * @b: pointer
 *
 * Return: .....
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len, base;

	if (!b)
		return (0);

	num = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			num += base;
		}
	}

	return (num);
}
