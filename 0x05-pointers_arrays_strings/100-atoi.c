#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int l = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[l])
	{
		if (s[l] == 45)
		{
			min *= -1;
		}

		while (s[l] >= 48 && s[l] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[l] - '0');
			l++;
		}

		if (isi == 1)
		{
			break;
		}

		l++;
	}

	ni *= min;
	return (ni);
}

