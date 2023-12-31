#include "main.h"

/**
  * _strcmp - function that compares the two strings
  * @s1: first string
  * @s2: string two
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (d);
}
